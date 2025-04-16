#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    float rayon = 12;
    printf("La valeur du rayon est %f\n", rayon);
    float air = M_PI * rayon * rayon;
    float perimeter = 2 * M_PI * rayon;
    printf("Surface de l'air : %f\n", air);
    printf("Perimetre : %f\n", perimeter);
    return 0;
}
