#include <stdio.h>
#include <stdint.h>

uint8_t rotate_left(uint8_t reg, uint8_t n) {
    // Your code here
    uint8_t new = 0;
    new = reg >> (8-n);
    reg = reg << n;
    reg = reg | new;
    return reg;
}

int main() {
    uint8_t reg, n;
    scanf("%hhu %hhu", &reg, &n);
    printf("%u", rotate_left(reg, n));
    return 0;
}