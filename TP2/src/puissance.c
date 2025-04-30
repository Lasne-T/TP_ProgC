#include <stdio.h>
#include <string.h>
int main() {
    int a, b, res; 
    a = 4;
    b = 15;

    for (int i = 0; i!=b ; i++)
    {
        a = a * a;
    
    }

    res = a;
    printf("%d\n", res);

    return 0;
}
