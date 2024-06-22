#include<stdio.h>
#include<string.h>
int main()

{
    char a[]="Tejas";
    char b[]=" Thorat";
    
    printf("length of a: %d",strlen(a));
    printf("\nConcat: %s",strcat(a,b));
    printf("\nLower: %s",strlwr(a));
    printf("\nUpper: %s",strupr(a));
    printf("\nReverse: %s",strrev(a));
    printf("\nCompare: %d",strcmp(a,b));
    printf("\nCompare: %d",strcmp(a,b));


    return 0;
}