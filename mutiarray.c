#include<stdio.h>
int main()
{
    int a[2][5]={{1,2,3,4,5},
                {6,7,8,9,0}};
    int *ptr[5];
    *ptr= a[0];
    for(int i=0;i<2;i++)
    {
     for(int j=0;j<5;j++)
    {
         printf("\n%d",a[i][j]);
        printf("\t%d",*(*ptr+i)+j);
    }
    }
   
    return 0;
}