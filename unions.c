#include<stdio.h>

union student{
    char name[20];
    int rollno;
   
};
void print (union student s)
{
    printf("%s \t %d\n",s.name,s.rollno);
}
int main()
{
     union student s2={"Tejas"};
     union student s3={13};
     print(s2);
     print(s3);
    
    return 0;
}