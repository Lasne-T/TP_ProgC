#include <stdio.h>
#include <string.h>
int main() {
    int a, b, res; 
    a = 4;
    b = 3;
    res = 1;

    for (int i = 0; i!=b;i++)
    {
        res = res * a;
    } 
    printf("%d\n", res);

    return 0;
}
