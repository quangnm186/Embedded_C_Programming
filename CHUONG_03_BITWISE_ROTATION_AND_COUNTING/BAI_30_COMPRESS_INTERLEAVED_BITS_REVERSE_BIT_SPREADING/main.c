#include <stdio.h>
#include <stdint.h>

uint8_t compress_bits(uint16_t val) {
    // Your logic here
    uint8_t reg =0,a=0;
    for(int i=0;i<=14;i=i+2)
    {
        a = (val >> i) & 1U;
        reg |= (a << (i / 2));
    }
    return reg;
}

int main() {
    uint16_t val;
    scanf("%hu", &val);

    uint8_t result = compress_bits(val);
    printf("%u", result);
    return 0;
}