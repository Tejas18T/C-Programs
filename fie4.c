#include <stdio.h>
int main()
{
    FILE *fp1,*fp2;
    char ch;
    fp1=fopen("T.txt","r");
    fp2=fopen("T1.txt","w+");
    while(ch != EOF)
    {
        ch=getc(fp1);
        putc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    printf("Data Copied Succefully");
    return 0;

}