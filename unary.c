#include<stdio.h>
int main()
{
    int a=10;
    printf("Pre Inc: %d",++a);
    printf("\nPost Inc: %d",a++);
    printf("\nPre dec: %d",--a);
    printf("\nPost dec: %d",a--);
    printf("Minus: %d",(-a));
    printf("\nLogical Not: %d",!a);
    return 0;
}