#include<stdio.h>
int main()
{
    int i=10;
     void *a;
     a=&i;
     //printf("%d",&i);
    printf("\n%d",*(int *)a);
    return 0;
}