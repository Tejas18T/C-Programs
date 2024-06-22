#include<stdio.h>
void fun()
{
   static int i=10;
    i++;
    printf("\n%d",i);
}

int main()
{
    for(int i=0;i<5;i++)
    {
        fun();
    }
    return 0;
}