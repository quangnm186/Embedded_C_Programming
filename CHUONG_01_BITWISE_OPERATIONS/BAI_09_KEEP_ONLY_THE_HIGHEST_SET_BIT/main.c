#include <stdio.h>
#include <stdint.h>

// Complete the function
uint16_t highest_set_bit(uint16_t reg) {
    // Your logic here
    int i=0,a=0,b=0;
    while(a<16)
    {
        if((reg & (1 << a)) != 0)
        {
           b=a;
        }
        a++;
    }
    reg = reg & (1 << b);
    return reg;
}

int main() {
    uint16_t reg;
    scanf("%hu", &reg);

    uint16_t result = highest_set_bit(reg);
    printf("%hu", result);
    return 0;
}