#include<stdio.h>

struct s1{
    char name[20];
    int rollno;
   
};
int main()
{
    struct s1 s={"Tejas", 12};
    
    printf("%s\t%d",s.name,s.rollno);
    return 0;
}