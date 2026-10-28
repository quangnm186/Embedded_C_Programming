#include <stdio.h>
#include <stdint.h>

uint8_t is_circular_match(uint16_t reg, uint16_t target) {
    // Duyệt qua tất cả 16 phép xoay có thể (xoay từ 0 đến 15 bit)
    for (int i = 0; i < 16; i++) {
        // Xoay trái i bit trong không gian 16-bit:
        // (reg << i) đẩy các bit sang trái
        // (reg >> (16 - i)) đưa các bit tràn ở bên trái vòng về bên phải
        uint16_t rotated = (reg << i) | (reg >> (16 - i));
        
        if (rotated == target) {
            return 1;
        }
    }
    
    return 0;
}

int main() {
    uint16_t reg, target;
    scanf("%hu %hu", &reg, &target);
    printf("%hhu", is_circular_match(reg, target));
    return 0;
}