#include <stdio.h>

int main() {
    unsigned int d = 0x08801000 | (1 << 12);

    
    int bit1 = (d >> (31 - 3)) & 1;  
    int bit2 = (d >> (31 - 19)) & 1; 

    if (bit1 == 1 && bit2 == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
