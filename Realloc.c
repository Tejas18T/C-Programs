#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr=(int*)malloc(sizeof(int));
    ptr=(int*)realloc(ptr,sizeof(long int));
    //ptr=(int*)realloc(ptr,sizeof(int));

    printf("Enter: ");
    scanf("%d",ptr);
    printf("%d",sizeof(ptr));


    
    return 0;
}