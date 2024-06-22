#include<stdio.h>
int main()
{
    int a=10,b=20;
    printf("Logical AND: %d",(a<b) && (a>b));
    printf("\nLogical OR: %d",(a<b) || (a>b));
    printf("\nLogical NOT: %d",!(a>b));
   
    
    return 0;
}