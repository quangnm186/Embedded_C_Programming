#include <stdio.h>
#include <stdint.h>

uint32_t set_baud_rate(uint32_t reg, uint8_t baud) {
    // Your code here
    reg = reg & 0xFFFFF0FF;
    reg = reg |  ((uint32_t)(baud | 0U) << 8);
    return reg;
}

int main() {
    uint32_t reg;
    uint8_t baud;
    scanf("%u %hhu", &reg, &baud);
    printf("%u", set_baud_rate(reg, baud));
    return 0;
}