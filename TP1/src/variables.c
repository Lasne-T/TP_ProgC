#include <stdio.h>
#include <string.h>


int main() {
    signed char s_char = -128;
    unsigned char u_char = 255;
    signed short s_short = -32768;
    unsigned short u_short = 65535;
    signed int s_int = -2147483648;
    unsigned int u_int = 4294967295;
    signed long long s_ll = -9223372036854775807LL;
    unsigned long long u_ll = 18446744073709551615ULL;
    float f_num = 3.14;
    double d_num = 2.718281828459;
    long double ld_num = 1.4142135623730950488;

    printf("signed char: %d\n", s_char);
    printf("unsigned char: %u\n", u_char);
    printf("signed short: %d\n", s_short);
    printf("unsigned short: %u\n", u_short);
    printf("signed int: %d\n", s_int);
    printf("unsigned int: %u\n", u_int);
    printf("signed long long: %lld\n", s_ll);
    printf("unsigned long long: %llu\n", u_ll);
    printf("float: %f\n", f_num);
    printf("double: %lf\n", d_num);
    printf("long double: %Lf\n", ld_num);

    return 0;
}
