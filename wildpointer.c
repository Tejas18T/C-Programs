#include<stdio.h>
int main()
{
    int i=10;
     int *a=(int*)malloc(sizeof(int));
    *a=98;
    // printf("%d",&i);
    printf("\n%d",*a);
    return 0;
}