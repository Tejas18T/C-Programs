#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("T.txt","r");

    while(ch != EOF)
    {
        ch=getc(fp);
        printf("%c",ch);
    }
    fclose(fp);
}