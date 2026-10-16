#include <stdio.h>

int toggleFifthBit(int n) {
    // Write your code here
    if((n&(1<<5))==0)
    {
        n = n | (1 << 5);
    }
    else if((n&(1<<5))!=0)
    {
        n = n & ~(1<<5);
    }
    return n;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", toggleFifthBit(n));
    return 0;
}