#include <stdio.h>
int main()
{
    FILE *fp1,*fp2;
    char ch;
    fp1=fopen("T.txt","r");
    fp2=fopen("T2.txt","w+");
    while(ch=getc(fp1) != EOF)
    {
        putc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    printf("Data Copied Succefully");
    return 0;

}