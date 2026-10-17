#include<stdio.h>
int checkBit(int N,int K)
{
    if((N & (1 << K)) != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int N,K;
    printf("nhap so va thu tu can check bit: ");
    scanf("%d %d",&N,&K);
    printf("%d",checkBit(N,K));
    return 0;
}