#include <stdio.h>
#include<stdint.h>
 uint8_t set_range(uint8_t reg, uint8_t start, uint8_t end)
 {
    uint8_t length = end - start + 1;
    uint8_t mask = ((1U << length) -1) << start;
    return reg | mask;
 }
 int main()
 {
    uint8_t reg, start,end;
    scanf("%hhu %hhu %hhu",&reg,&start,&end);
    printf("%u",set_range(reg,start,end));
 }