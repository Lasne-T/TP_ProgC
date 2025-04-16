#include <stdio.h>

void afficherBinaire(int nombre) {
    int taille = sizeof(int) * 8;
    int masque;

    printf("Représentation binaire de %d : ", nombre);

    for (int i = taille - 1; i >= 0; i--) {
        masque = 1 << i; 
        if (nombre & masque) {
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n");
}

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    for (int i = 0; i < taille; i++) {
        afficherBinaire(nombres[i]);
    }

    return 0;
}
