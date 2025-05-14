#include <arpa/inet.h>
#include <errno.h>
#include <netinet/in.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include "serveur.h"

int socketfd;

int renvoie_message(int client_socket_fd, char *data)
{
  int data_size = write(client_socket_fd, (void *)data, strlen(data));
  if (data_size < 0)
  {
    perror("Erreur d'écriture");
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}

int recois_envoie_message(int client_socket_fd, char *data)
{
  printf("Message reçu: %s\n", data);
  const char *response = "message: Bonjour, client!";
  return renvoie_message(client_socket_fd, response);
}

void gestionnaire_ctrl_c(int signal)
{
  printf("\nSignal Ctrl+C capturé. Sortie du programme.\n");
  if (socketfd != -1)
  {
    close(socketfd);
  }
  exit(0);
}

void gerer_client(int client_socket_fd)
{
  char data[1024];
  while (1)
  {
    memset(data, 0, sizeof(data));
    int data_size = read(client_socket_fd, data, sizeof(data));
    if (data_size <= 0)
    {
      if (data_size == 0)
      {
        printf("Client déconnecté.\n");
      }
      else
      {
        perror("Erreur de réception");
      }
      close(client_socket_fd);
      break;
    }
    recois_envoie_message(client_socket_fd, data);
  }
}

int main()
{
  int bind_status;
  struct sockaddr_in server_addr;
  int option = 1;

  socketfd = socket(AF_INET, SOCK_STREAM, 0);
  if (socketfd < 0)
  {
    perror("Impossible d'ouvrir une socket");
    return -1;
  }

  setsockopt(socketfd, SOL_SOCKET, SO_REUSEADDR, &option, sizeof(option));

  memset(&server_addr, 0, sizeof(server_addr));
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(PORT);
  server_addr.sin_addr.s_addr = INADDR_ANY;

  bind_status = bind(socketfd, (struct sockaddr *)&server_addr, sizeof(server_addr));
  if (bind_status < 0)
  {
    perror("bind");
    return (EXIT_FAILURE);
  }

  signal(SIGINT, gestionnaire_ctrl_c);

  listen(socketfd, 10);
  printf("Serveur en attente de connexions...\n");

  struct sockaddr_in client_addr;
  unsigned int client_addr_len = sizeof(client_addr);
  int client_socket_fd;

  while (1)
  {
    client_socket_fd = accept(socketfd, (struct sockaddr *)&client_addr, &client_addr_len);
    if (client_socket_fd < 0)
    {
      perror("accept");
      continue;
    }

    pid_t child_pid = fork();
    if (child_pid == 0)
    {
      close(socketfd);
      gerer_client(client_socket_fd);
      exit(0);
    }
    else if (child_pid < 0)
    {
      perror("fork");
      close(client_socket_fd);
    }
    else
    {
      close(client_socket_fd);
    }
  }

  return 0;
}
