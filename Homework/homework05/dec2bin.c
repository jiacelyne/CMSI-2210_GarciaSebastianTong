#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    unsigned int decimalNum;
    if (argc > 1) {
        decimalNum = (unsigned int)atoi(argv[1]);
    } else {
        printf("Enter a decimal number: ");
        scanf("%u", &decimalNum);
    }

    printf("Binary: ");
    for(int i = 31; i >= 0; i--) {
        if (decimalNum & 1u << i) {
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n");
    return 0;
}