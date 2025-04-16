#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int a = 16;
    int b = 3;
    int addition = a + b;
    int subtraction = a - b;
    int multiplication = a * b;
    int division = a / b;
    int modulo = a % b;
    bool egale = a == b;
    bool superieur = a < b;
    printf("La valeur de a est : %d",a);
    printf("\nLa valeur de b est : %d",b);
    printf("\nLa somme de a et b est : %d", addition);
    printf("\nLa difference de a et b est : %d", subtraction);
    printf("\nLe produit de a et b est : %d", multiplication);
    printf("\nLa division de a par b est : %d", division);
    printf("\nLe reste de la division de a par b est : %d", modulo);
    printf("\nLes deux variables sont-elles egales? : %s", egale? "Oui" : "Non");
    printf("\nLa valeur de a est-elle superieure a b? : %s", superieur? "Oui" : "Non");
    return 0;
}
