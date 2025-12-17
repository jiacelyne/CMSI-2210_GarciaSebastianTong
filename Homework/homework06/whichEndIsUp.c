#include <stdio.h>
#include <stdint.h>

void checkEndianness(uint32_t value) {
    uint8_t *byte_ptr = (uint8_t *) &value;
    printf("Value: 0x%08X\n", value);
    printf("First byte in memory: 0x%02X\n", byte_ptr[0]);
    if (byte_ptr[0] == (value >> 24)) {
        printf("BIG ENDIAN\n");

    } else if (byte_ptr[0] == (value & 0xFF)) {
        printf("LITTLE ENDIAN\n");
    }
}

int main() {
//    u_int16_t test_value;
// needed to correct this to remove the underscore
    uint16_t test_value;
    printf("Enter a hex value (e.g., 0x01020304): ");
    scanf("%x", &test_value);

    checkEndianness(test_value);

    return 0;

}
