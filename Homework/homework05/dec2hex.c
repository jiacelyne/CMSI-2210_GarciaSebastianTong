#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    unsigned long long num;
    int hexDigit = 8;

    if (argc >= 2) {
        num = (unsigned long long) atoi(argv[1]);
        if (argc == 3) {
            hexDigit = atoi(argv[2]);
        }
    } else {
        printf("Enter a base 10 number: ");
        if (scanf("%llu", &num) !=1) {
            puts("Error invalid input");
            return 1;
        }
        printf("Enter number of hex digits wanted, 8 or 16: ");
        if (scanf("%d", &hexDigit) != 1 || (hexDigit != 8 && hexDigit != 16)){
            puts("Error hex digits can only be 8 or 16");
            return 1;            
        }
    }
    if (hexDigit == 8)
        printf("32 bit Hex: 0x%08X\n", (unsigned int)num);
    else
        printf("64 bit Hex: 0x%016llX\n", num);
    return 0;
}