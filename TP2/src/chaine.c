#include <stdio.h>

int longueur_chaine(const char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

void copier_chaine(char *dest, const char *source) {
    int i = 0;
    while (source[i] != '\0') {
        dest[i] = source[i];
        i++;
    }
    dest[i] = '\0';
}

void concatener_chaine(char *dest, const char *source) {
    int i = longueur_chaine(dest);
    int j = 0;

    while (source[j] != '\0') {
        dest[i] = source[j];
        i++;
        j++;
    }
    dest[i] = '\0'; 
}

int main() {
    char chaine1[50] = "Hello";
    char chaine2[] = " World!";
    char copie[50];
    char concat[100];


    printf("Longueur de \"%s\" : %d\n", chaine1, longueur_chaine(chaine1));


    copier_chaine(copie, chaine1);
    printf("Copie de la chaîne : %s\n", copie);


    copier_chaine(concat, chaine1);
    concatener_chaine(concat, chaine2);
    printf("Concaténation : %s\n", concat);

    return 0;
}
