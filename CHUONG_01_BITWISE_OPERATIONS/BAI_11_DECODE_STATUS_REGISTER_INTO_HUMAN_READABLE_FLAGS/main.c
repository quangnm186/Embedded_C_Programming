#include <stdio.h>
#include <stdint.h>

void decode_status(uint8_t status_reg) {
    // Your logic here
    if((status_reg&(1<<0))!=0)
    {
        printf("Power On\n");
    }
     if((status_reg&(1<<1))!=0)
    {
        printf("Error\n");
    }
     if((status_reg&(1<<2))!=0)
    {
        printf("Tx Ready\n");
    }
     if((status_reg&(1<<3))!=0)
    {
        printf("Rx Ready\n");
    }
     if((status_reg&(1<<4))!=0)
    {
        printf("Overheat\n");
    }
     if((status_reg&(1<<5))!=0)
    {
        printf("Undervoltage\n");
    }
     if((status_reg&(1<<6))!=0)
    {
        printf("Timeout\n");
    }
     if((status_reg&(1<<7))!=0)
    {
        printf("Reserved\n");
    }
}

int main() {
    uint8_t reg;
    scanf("%hhu", &reg);
    decode_status(reg);
    return 0;
}