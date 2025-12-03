#include <stdint.h> 

uint32_t makeNBO(uint32_t value) {
    uint32_t test = 0x01020304;
    uint8_t *byte_ptr = (uint8_t *) &test;
    if (byte_ptr[0] == 0x04) {
        return ((value & 0x000000FF) << 24) |
               ((value & 0x0000FF00) << 8)  |
               ((value & 0x00FF0000) >> 8)  |
               ((value & 0xFF000000) >> 24);
    }
    return value;
}