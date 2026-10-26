#include <stdio.h>
#include <stdint.h>

uint32_t update_register(uint32_t reg) {
    uint32_t new =0;
    new = reg & (0b11111<<10);
   new = new >>10;
    if(new<31)
    {
        new+=1;
    }
    new = new <<10;
    reg = reg & (0b11111111111111111000001111111111);
    reg = reg | new ;
    // Your logic here
    
    return reg;
}

int main() {
    uint32_t reg;
    scanf("%u", &reg);
    uint32_t updated = update_register(reg);
    printf("%u", updated);
    return 0;
}