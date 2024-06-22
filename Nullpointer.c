#include<stdio.h>
int main()
{
    int i=10;
     int *a=(int*)malloc(sizeof(int));
    if(a == NULL) 
    {
         printf("NUll");
    }
    else
    {
       printf("\n%d",*a);
    }
    return 0;
}