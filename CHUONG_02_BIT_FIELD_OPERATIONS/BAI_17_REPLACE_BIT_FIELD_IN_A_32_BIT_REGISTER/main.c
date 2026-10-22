#include <stdio.h>
#include <stdint.h>

uint32_t replace_field(uint32_t reg, uint32_t val, uint8_t pos, uint8_t len) {
    // Your code here
   uint32_t mask = ((1U << len) - 1) << pos; // Tạo mask nằm sẵn ở vị trí pos

    reg = reg & ~mask;         // 1. Xóa vùng bit đó
    reg = reg | ((val << pos) & mask); // 2. Đưa giá trị mới vào (chống lem)
    return reg;
}

int main() {
    uint32_t reg, val;
    uint8_t pos, len;
    scanf("%u %u %hhu %hhu", &reg, &val, &pos, &len);
    printf("%u", replace_field(reg, val, pos, len));
    return 0;
}