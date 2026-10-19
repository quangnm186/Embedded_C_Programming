#include <stdio.h>

unsigned char extractNibble(unsigned char reg, int pos) {
    // Write your code here
    if (pos == 1) {
        return (reg >> 4) & 0x0F;
        //Khi pos == 1 (nibble cao - bit 4 đến 7): Dịch phải 4 bit reg >> 4 để đưa 
        //nibble cao về vị trí thấp nhất, sau đó AND với 0x0F (tức 0b00001111)
        // để lọc lấy đúng giá trị 4 bit đó.
    }
    return reg & 0x0F;
    //Khi pos == 0 (nibble thấp - bit 0 đến 3): 
    //Giữ nguyên vị trí và dùng mặt nạ reg & 0x0F để lấy 4 bit cuối.
    
}

int main() {
    unsigned char reg;
    int pos;
    scanf("%hhu %d", &reg, &pos);
    printf("%d", extractNibble(reg, pos));
    return 0;
}