#include<stdio.h>
int main()
{
    int reg,pos;
    printf("Nhap so va vi tri can set bit: ");
    scanf("%d %d",&reg,&pos);
    reg = reg | (1<<pos);
    printf("%d",reg);
    return 0;
}