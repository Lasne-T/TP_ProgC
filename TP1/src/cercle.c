#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    float rayon;
    printf("Entrez la valeur du rayon");
    scanf("%f", &rayon);
    float air = Math_PI * rayon * rayon;
    float perimeter = 2 * Math_PI * rayon;
    printf("Surface de l'air : %f\n", air);
    printf("Perimetre : %f\n", perimeter);
    return 0;
}
