#include <stdio.h>
#include <stdint.h>

uint8_t count_set_bits(uint8_t reg) {
    // Your code here
    uint8_t count =0;
    int i=0;
    while(i<8)
    {
        if( ((reg>>i) & 1U) != 0 )
        {
            count++;
        }
        i++;
    }
    return count;
}

int main() {
    uint8_t reg;
    scanf("%hhu", &reg);
    printf("%u", count_set_bits(reg));
    return 0;
}