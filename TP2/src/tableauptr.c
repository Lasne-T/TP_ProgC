#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 10

int main() {
    srand(time(NULL));

    int tabInt[TAILLE];
    float tabFloat[TAILLE];

    int *pInt = tabInt;
    float *pFloat = tabFloat;

    for (int i = 0; i < TAILLE; i++) {
        *(pInt + i) = rand() % 100;     
        *(pFloat + i) = (float)(rand() % 100) / 10.0;
    }

    printf("Tableau d'entiers (avant modification) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", *(pInt + i));
    }
    printf("\n");

    printf("Tableau de flottants (avant modification) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%.2f ", *(pFloat + i));
    }
    printf("\n");

    for (int i = 0; i < TAILLE; i++) {
        if (i % 2 == 0) {
            *(pInt + i) *= 3;
            *(pFloat + i) *= 3.0;
        }
    }

    
    printf("\nTableau d'entiers (après modification) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", *(pInt + i));
    }
    printf("\n");

    printf("Tableau de flottants (après modification) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%.2f ", *(pFloat + i));
    }
    printf("\n");

    return 0;
}
