#include<stdio.h>
int main(void)
{
    FILE *fp = stdout;
    int num=102;
    unsigned int c=0;
    printf("%d",c);
    fprintf(fp,"%d-%c-%d-%c",num,num-32,num+=32,num-=32);
   
    return 0;
}