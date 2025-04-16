#include <stdio.h>
#include <string.h>


int main() {
    int num1, num2;
    char op;
    printf("Entrez le premier entier : ");
    scanf("%d", &num1);
    printf("Entrez le deuxième entier : ");
    scanf("%d", &num2);
    printf("Entrez l'opérateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op); 
    switch (op) {
        case '+':
            printf("Résultat : %d\n", num1 + num2);
            break;
        case '-':
            printf("Résultat : %d\n", num1 - num2);
            break;
        case '*':
            printf("Résultat : %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Résultat : %d\n", num1 / num2);
            } else {
                printf("Erreur : Division par zéro.\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                printf("Résultat : %d\n", num1 % num2);
            } else {
                printf("Erreur : Modulo par zéro.\n");
            }
            break;
        case '&':
            printf("Résultat : %d\n", num1 & num2);
            break;
        case '|':
            printf("Résultat : %d\n", num1 | num2);
            break;
        case '~':
            printf("Résultat pour ~num1 : %d\n", ~num1);
            printf("Résultat pour ~num2 : %d\n", ~num2);
            break;
        default:
            printf("Erreur : Opérateur non valide.\n");
    }
    return 0;
}

