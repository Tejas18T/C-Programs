#include <stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("T.txt","w+");
    fclose(fp);
}