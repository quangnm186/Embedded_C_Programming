#include <stdio.h>
#include <stdint.h>

// Define bitwise macros here

uint8_t modify_register(uint8_t reg) {
    // Apply operations in order
    reg = reg | (1 << 2);
    reg = reg | (1<<7);
    reg = reg & ~(1<<3);
    if((reg & (1 << 5)) != 0)
    {
        reg = reg & ~(1<<5);

    }
    else
    {
        reg = reg | (1<<5);
    }
    return reg;
}

int main() {
    uint8_t reg;
    scanf("%hhu", &reg);
    printf("%u", modify_register(reg));
    return 0;
}