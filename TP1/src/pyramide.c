#include <stdio.h>
,
int main() {
    int n ;
    printf("La taille de la pyramide doit être de : \n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        
        printf("\n");
    }
    
    printf("Pyramide générée avec succès !\n");
    return 0;
}
