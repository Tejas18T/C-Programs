#include<stdio.h>

int main()
{
    struct car{
    //char engine;
    //char fuel;
    int Fuel_capacity,seat;
    float milege;
};
    struct car c;
    //c.engine="190 engine";

    //printf("%s",c.engine);
     printf("\n%d",sizeof(c));
    return 0;
}