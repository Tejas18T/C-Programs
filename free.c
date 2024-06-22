#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n=10;
    int *ptr=(int*)calloc(10,sizeof(int));
    // same as int *ptr=(int*)malloc(10*sizeof(int));

   free(ptr);
   ptr=NULL;
    
    printf("%d",sizeof(ptr));


    
    return 0;
}