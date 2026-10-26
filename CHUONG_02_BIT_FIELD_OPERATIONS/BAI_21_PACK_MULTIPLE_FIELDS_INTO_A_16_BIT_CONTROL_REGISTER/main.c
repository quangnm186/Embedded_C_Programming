#include <stdio.h>
#include <stdint.h>

uint16_t pack_register(uint8_t mode, uint8_t speed, uint8_t status) {
    // Your logic here
    uint16_t reg = ((uint16_t)(status & 0x3F) << 10) |
                   ((uint16_t)(speed  & 0x1F) << 3)  |
                   ((uint16_t)(mode   & 0x07));

    return reg;
}

int main() {
    uint8_t mode, speed, status;
    scanf("%hhu %hhu %hhu", &mode, &speed, &status);

    uint16_t reg = pack_register(mode, speed, status);
    printf("%u", reg);
    return 0;
}