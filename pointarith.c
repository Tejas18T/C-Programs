#include<stdio.h>
int main()
{
    int i[]={10,20,30,40};
     int *a;
     a=&i[2];
     a=a-1;
     printf("%d",*(a));
    printf("\n%d",*a);
    return 0;
}