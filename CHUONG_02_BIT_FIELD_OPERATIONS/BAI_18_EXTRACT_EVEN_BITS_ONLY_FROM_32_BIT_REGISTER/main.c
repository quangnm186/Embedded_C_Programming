#include<stdio.h>
#include<stdint.h>
uint32_t extract_even_bits(uint32_t reg)
{
    uint32_t result = 0;
    for(int i=0;i<16;i++)
    {
        result = result | (((reg >> (2*i)) & 1U)<<i);
    }
    return result;
}
int main()
{
    uint32_t reg;
    scanf("%u",&reg);
    printf("%u",extract_even_bits(reg));
    return 0;
}