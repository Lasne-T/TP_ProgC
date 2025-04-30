#include <stdio.h>

int main() {
    char c = 'A';
    short s = 32000;
    int i = 100000;
    long int li = 1000000000;
    long long int lli = 9000000000000000000;
    float f = 3.14;
    double d = 3.1415926535;
    long double ld = 3.141592653589793238;

    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("Avant manipulation :\n");
    printf("Adresse de c : %p, Valeur : %X\n", (void*)pc, c);
    printf("Adresse de s : %p, Valeur : %X\n", (void*)ps, s);
    printf("Adresse de i : %p, Valeur : %X\n", (void*)pi, i);
    printf("Adresse de li : %p, Valeur : %lX\n", (void*)pli, li);
    printf("Adresse de lli : %p, Valeur : %llX\n", (void*)plli, lli);
    printf("Adresse de f : %p, Valeur : %X\n", (void*)pf, *(unsigned int*)&f);
    printf("Adresse de d : %p, Valeur : %lX\n", (void*)pd, *(unsigned long*)&d);
    printf("Adresse de ld : %p, Valeur : %llX\n", (void*)pld, *(unsigned long long*)&ld);

    *pc = 'B';
    *ps += 1;
    *pi -= 1;
    *pli += 100;
    *plli -= 100000;
    *pf *= 2.0;
    *pd /= 2.0;
    *pld += 0.01;

    printf("\nAprès manipulation :\n");
    printf("Adresse de c : %p, Valeur : %X\n", (void*)pc, c);
    printf("Adresse de s : %p, Valeur : %X\n", (void*)ps, s);
    printf("Adresse de i : %p, Valeur : %X\n", (void*)pi, i);
    printf("Adresse de li : %p, Valeur : %lX\n", (void*)pli, li);
    printf("Adresse de lli : %p, Valeur : %llX\n", (void*)plli, lli);
    printf("Adresse de f : %p, Valeur : %X\n", (void*)pf, *(unsigned int*)&f);
    printf("Adresse de d : %p, Valeur : %lX\n", (void*)pd, *(unsigned long*)&d);
    printf("Adresse de ld : %p, Valeur : %llX\n", (void*)pld, *(unsigned long long*)&ld);

    return 0;
}
