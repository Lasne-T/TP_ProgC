#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include "client.h"

int envoie_recois_message(int socketfd)
{
  char data[1024];
  memset(data, 0, sizeof(data));
  const char *message = "message: Bonjour, serveur!";
  strcpy(data, message);
  int write_status = write(socketfd, data, strlen(data));
  if (write_status < 0)
  {
    perror("Erreur d'écriture");
    return -1;
  }
  memset(data, 0, sizeof(data));
  int read_status = read(socketfd, data, sizeof(data));
  if (read_status < 0)
  {
    perror("Erreur de lecture");
    return -1;
  }
  printf("Message reçu: %s\n", data);
  return 0;
}

int main()
{
  int socketfd;
  struct sockaddr_in server_addr;
  socketfd = socket(AF_INET, SOCK_STREAM, 0);
  if (socketfd < 0)
  {
    perror("socket");
    exit(EXIT_FAILURE);
  }

  memset(&server_addr, 0, sizeof(server_addr));
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(PORT);
  server_addr.sin_addr.s_addr = INADDR_ANY;

  int connect_status = connect(socketfd, (struct sockaddr *)&server_addr, sizeof(server_addr));
  if (connect_status < 0)
  {
    perror("connection serveur");
    exit(EXIT_FAILURE);
  }

  while (1)
  {
    envoie_recois_message(socketfd);
  }

  close(socketfd);
}
