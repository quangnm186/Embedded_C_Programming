#include <stdio.h>
#include <stdint.h>

uint32_t rotate_right(uint32_t reg, uint8_t n) {
    // Your code here
    uint32_t new1=0,new2=0;
    new1=reg>>n;
    new2=reg<<(32-n);
    reg = new1 | new2;
    return reg;
}

int main() {
    uint32_t reg;
    uint8_t n;
    scanf("%u %hhu", &reg, &n);
    printf("%u", rotate_right(reg, n));
    return 0;
}