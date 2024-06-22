#include<stdio.h>
extern int a;
extern void fun()
{
    a++;
    printf("\n%d",a);
}