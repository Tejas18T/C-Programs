#include<stdio.h>
int area1(int,int);

int main()
{
    int l=10,b=10;
    int area=area1(l,b);
    printf("Area=%d ",area);
    return 0;
}
int area1(int l,int b)
{
    return l*b;
}