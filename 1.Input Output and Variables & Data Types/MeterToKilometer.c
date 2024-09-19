/*Write a program which accept distance in Meter and convert it into kilometer.
(1000 meter = 1 kilometer)*/

#include<stdio.h>
#include<conio.h>

int main()

{
    float Meter = 0, Kilometer = 0;
    printf("Distance in Meter:",Meter);
    scanf("%f",&Meter);

    Meter /= 1000;       // Also use: Meter /= 1000

    printf("Distance in Kilometer:%f",Meter);

    getch();
}
