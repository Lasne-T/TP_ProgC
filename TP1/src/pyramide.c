#include <stdio.h>
#include <string.h>
int main() {
    int compteur = 5; 
    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % 2 == 0 && j > 1 && j < i) {
                printf("# ");
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}
