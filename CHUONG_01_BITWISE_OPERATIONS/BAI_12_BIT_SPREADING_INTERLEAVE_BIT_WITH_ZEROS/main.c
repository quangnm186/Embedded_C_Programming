#include <stdio.h>
#include <stdint.h>

uint16_t spread_bits(uint8_t val) {
    uint16_t result = 0;
    for (int i = 0; i < 8; i++) {
        // Kiểm tra xem bit thứ i của val có bằng 1 hay không
        if ((val >> i) & 1) {
            // Nếu có, đưa bit 1 đó vào vị trí (2 * i) trong kết quả 16-bit
            result |= ((uint16_t)1 << (2 * i));
        }
    }
    return result;
}

int main() {
    uint8_t val;
    scanf("%hhu", &val);

    uint16_t result = spread_bits(val);
    printf("%u", result);
    return 0;
}