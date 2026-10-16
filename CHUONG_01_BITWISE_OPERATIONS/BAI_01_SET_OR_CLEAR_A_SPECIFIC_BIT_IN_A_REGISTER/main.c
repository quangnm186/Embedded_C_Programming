#include <stdio.h>

unsigned char modifyBit(unsigned char reg, int pos, int mode) {
    // Write your code here
    if ( mode == 1 )
    {
        reg = reg | ( 1 << pos );
        return reg;
    }
    else if ( mode == 0)
    {
        reg = reg & ~ (1 << pos);
        return reg;
    }
   
}

int main() {
    unsigned char reg;
    int pos, mode;
    scanf("%hhu %d %d", &reg, &pos, &mode);
    printf("%d", modifyBit(reg, pos, mode));
    return 0;
}

// bitwise & | ~
// 1 & 1 = 1, 1 & 0 = 0 & 0 = 0
// 0 | 0 = 0, 1 | 0 = 0 | 1 = 1,
// ~1 = 0, ~0 = 1
//  reg: x(10) ->                               a b c d e f g h
//pos: 2-> bit thu 2 can phai thay doi          7 6 5 4 3 2 1 0  
                                    //          0 0 0 0 0 1 0 0  = 1 << 2                   
//mode: 1-> bit f phai set len 1 -> f | 1 = 1, cac bit con lai se giu nguyen, a | 0 = a,...

//mode: 0 -> bit f clear ve 0
//  f & 0 = 0, cac bit con lai giu nguyen -> cac bit con lai &1
// a b c d e f g h
// 1 1 1 1 1 0 1 1   = ~ (0 0 0 0 0 1 0 0 = 1 << pos )