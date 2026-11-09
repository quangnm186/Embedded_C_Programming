#include <stdio.h>
#include <stdint.h>

uint8_t reverse_bits(uint8_t val) {
    // Your logic here
   uint8_t rev = 0;
    for (int i = 0; i < 8; i++) {
        // Dịch rev sang trái 1 bit để lấy chỗ cho bit mới
        rev <<= 1;
        // Lấy bit cuối (LSB) của val đưa vào rev
        rev |= (val & 1U);
        // Dịch val sang phải để chuẩn bị bit tiếp theo
        val >>= 1;
    }
    return rev;
    return val;
}

int main() {
    uint8_t val;
    scanf("%hhu", &val);

    uint8_t result = reverse_bits(val);
    printf("%u", result);
    return 0;
}