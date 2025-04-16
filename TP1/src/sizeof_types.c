#include <stdio.h>
#include <string.h>

int main(){
    printf("La taille en butes en octets des differents types de base :");
    printf("\n- char : %lu octets", sizeof(char));
    printf("\n- short : %lu octets", sizeof(short));
    printf("\n- int : %lu octets", sizeof(int));
    printf("\n- int long : %lu octets", sizeof(int long));
    printf("\n- int long long : %lu octets", sizeof(int long long));
    printf("\n- float : %lu octets", sizeof(float));
    printf("\n- double : %lu octets", sizeof(double));
    printf("\n- long double : %lu octets", sizeof(long double));
    return 0;
}
