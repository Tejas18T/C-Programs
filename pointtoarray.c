#include<stdio.h>
int main()
{
    int i[]={10,20,30};
     int (*a)[3]=&i;
    
     printf("%d",**a);
   // printf("\n%d",&a);
    return 0;
}