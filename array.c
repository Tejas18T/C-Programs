#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int *ptr;
    *ptr= a[0];
    for(int i=0;i<8;i++)
    {
         printf("\n%d",a[i]);
         printf("\n%d",*ptr+i);
    }
   
    return 0;
}