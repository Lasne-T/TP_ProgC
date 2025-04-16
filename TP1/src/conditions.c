#include <stdio.h>
#include <string.h>

int main() {
    int somme = 0; 
    int compteur; 
    for (compteur = 1; compteur <= 1000; compteur++) {
        if (compteur % 11 == 0) {
            continue;
        }
        if (compteur % 5 == 0 || compteur % 7 == 0) {
            somme += compteur;
        }
        if (somme > 5000) {
            break;
        }
    }
    printf("La somme finale est : %d\n", somme);
    return 0;
}
