/*Write a program which accept distance in kilometer and convert it into meter.
(1 kilometer = 1000 Meter)*/

#include<stdio.h>
#include<conio.h>

int main()

{
    float Kilometer = 0.0, Meter = 0.0;

    printf("Distance in Kilometer:");
    scanf("%f",&Kilometer);

    Meter = Kilometer * 1000;       // Also use: Kilometer /= 1000

    printf("Distance in Meter:%f",Meter);

    getch();
}
