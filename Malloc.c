#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr=(int*)malloc(sizeof(int));
    printf("Enter: ");
    scanf("%d",ptr);
    printf("%d",*ptr);


    
    return 0;
}