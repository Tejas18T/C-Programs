#include<stdio.h>
int main()
{
    register int a=0;
    printf("%d",a);
    printf("%d",&a);
    return 0;
}