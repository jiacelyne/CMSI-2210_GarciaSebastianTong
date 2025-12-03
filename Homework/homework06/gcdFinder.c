#include <stdio.h>
#include <stdint.h>
#include <assert.h>

extern uint64_t findGCD(uint64_t a, uint64_t b);

int main() {

//Sample Cases
    assert(findGCD(10, 5) == 5);
    assert(findGCD(17, 13) == 1);
    assert(findGCD(270, 192) == 6);

//Homework Test Cases
    uint64_t a = 3113041662ULL;
    uint64_t b = 11570925ULL;

    uint64_t result = findGCD(a, b);
    printf("GCD(%llu, %llu) = %llu\n", a, b, result);

    assert(result == 462837ULL);

    printf("All GCD tests passed yayy!\n");
    return 0;
}
