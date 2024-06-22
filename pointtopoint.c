#include<stdio.h>
int main()
{
    int i=10;
     int *a;
     int *b;
     a=&i;
     b=a;
     //*b=5;
     printf("%d",(*a)==(*b));
   
    return 0;
}