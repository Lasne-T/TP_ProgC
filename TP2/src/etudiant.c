#include <stdio.h>

int main() {
    
    char noms[5][50] = {"Dupont", "Martin", "Lefevre", "Bernard", "Durand"};
    char prenoms[5][50] = {"Marie", "Pierre", "Sophie", "Jean", "Camille"};
    char adresses[5][100] = {
        "10 rue Victor Hugo, Paris",
        "5 avenue Foch, Lyon",
        "22 boulevard Haussmann, Bordeaux",
        "15 place Bellecour, Marseille",
        "8 rue de la Republique, Combourg"
    };
    float notes_prog[5] = {14.5, 16.0, 12.5, 17.8, 15.2};
    float notes_sys[5] = {13.0, 15.5, 14.2, 18.0, 16.5};

    
    printf("Liste des étudiants :\n");
    for (int i = 0; i < 5; i++) {
        printf("Étudiant.e %d\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prénom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note en Programmation C : %.2f\n", notes_prog[i]);
        printf("Note en Système d'exploitation : %.2f\n", notes_sys[i]);
        printf("-----------------------------\n");
    }

    return 0;
}
