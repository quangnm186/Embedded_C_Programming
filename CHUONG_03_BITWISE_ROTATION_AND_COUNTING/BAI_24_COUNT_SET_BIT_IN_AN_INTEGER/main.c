#include <stdio.h>

int countSetBits(unsigned int n) {
    // Write your code here
    int a=0;
    for(int i=0;i<32;i++)
    {
        if((n&(1U<<i)) != 0)
        {
            a++;
        }
    }
    return a;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", countSetBits(n));
    return 0;
}