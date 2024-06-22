#include<stdio.h>

struct s1{
    char name[20];
    int rollno;
   
};
void print (struct s1 *s)
{
    printf("%s \t %d\n",s->name,s->rollno);
}
int main()
{
    struct s1 s2={"Tejas", 12};
    struct s1 s3={"Prasad", 13};
     print(&s2);
     print(&s3);
    
    return 0;
}