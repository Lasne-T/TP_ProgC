#include <stdio.h>
#include <string.h>
int main() {
    unsigned int d = 0x00100008;
    unsigned int masque4 = 1 << (32 - 4);
    unsigned int masque20 = 1 << (32 - 20);
  
    if ((d & masque4) && (d & masque20)) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
