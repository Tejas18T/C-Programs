#include<stdio.h>
#include "externdemo.c"
int a;
int main()
{
    a=10;
    for(int i=0;i<5;i++)
    {
        fun();
    }
    return 0;
}