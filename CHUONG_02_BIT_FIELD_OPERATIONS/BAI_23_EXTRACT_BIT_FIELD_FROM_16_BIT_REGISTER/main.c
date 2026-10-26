#include <stdio.h>
#include <stdint.h>

uint16_t extract_field(uint16_t reg) {
    // Your logic here
    uint16_t new = 0;
    new = reg & (0b11111 << 4);
    new = new >> 4;
    return new;
}

int main() {
    uint16_t reg;
    scanf("%hx", &reg);
    printf("%u", extract_field(reg));
    return 0;
}