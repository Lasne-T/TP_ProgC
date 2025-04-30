#include <stdio.h>


struct Couleur {
    unsigned char rouge;
    unsigned char vert;
    unsigned char bleu;
    unsigned char alpha;
};

int main() {
    
    struct Couleur couleurs[10] = {
        {0xEF, 0x78, 0x12, 0xFF},
        {0x2C, 0xC8, 0x64, 0xFF},
        {0x90, 0x45, 0xD1, 0xFF},
        {0xFF, 0x00, 0x00, 0xFF},
        {0x00, 0xFF, 0x00, 0xFF}, 
        {0x00, 0x00, 0xFF, 0xFF}, 
        {0xFF, 0xFF, 0x00, 0xFF}, 
        {0xFF, 0xA5, 0x00, 0xFF}, 
        {0x80, 0x80, 0x80, 0xFF}, 
        {0x00, 0x00, 0x00, 0xFF}  
    };

    
    printf("Liste des couleurs en format RGBA :\n");
    for (int i = 0; i < 10; i++) {
        printf("\nCouleur %d :\n", i + 1);
        printf("Rouge : %d\n", couleurs[i].rouge);
        printf("Vert  : %d\n", couleurs[i].vert);
        printf("Bleu  : %d\n", couleurs[i].bleu);
        printf("Alpha : %d\n", couleurs[i].alpha);
        printf("-----------------------------");
    }

    return 0;
}
