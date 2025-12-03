#include <stdio.h>
#include <stdint.h>

uint32_t makeNBO(uint32_t value);

int main() {
    uint32_t test_value;
    uint32_t nbo_value;
    
    printf("Enter a hex value: ");
    scanf("%x", &test_value);
    
    nbo_value = makeNBO(test_value);
    
    printf("Original: 0x%08X\n", test_value);
    printf("Network Byte Order: 0x%08X\n", nbo_value);
    
    return 0;
}
