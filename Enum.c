#include<stdio.h>

enum boolean { NO, YES};
enum days {SUN, MON,TUE=4, WED, THU, FRI, SAT};
int main()
{
   enum boolean flag= YES;
   printf("%d, %d",flag,MON);
    
    return 0;
}