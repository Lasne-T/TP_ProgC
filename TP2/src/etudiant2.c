#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note_prog;
    float note_sys;
};

int main() {
    
    struct Etudiant etudiants[5] = {
        {"Dupont", "Marie", "20, Boulevard Niels Bohr, Lyon", 16.5, 12.1},
        {"Martin", "Pierre", "22, Boulevard Niels Bohr, Lyon", 14.0, 14.1},
        {"Lefevre", "Sophie", "5, Rue de la Paix, Paris", 15.8, 16.2},
        {"Bernard", "Jean", "10, Avenue Victor Hugo, Marseille", 13.5, 15.0},
        {"Durand", "Camille", "8, Place Bellecour, Combourg", 17.2, 18.3}
    };

    
    printf("Liste des étudiant.e.s :\n");
    for (int i = 0; i < 5; i++) {
        printf("\nÉtudiant.e %d\n", i + 1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prénom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note en Programmation C : %.2f\n", etudiants[i].note_prog);
        printf("Note en Système d'exploitation : %.2f\n", etudiants[i].note_sys);
        printf("-----------------------------");
    }

    return 0;
}
