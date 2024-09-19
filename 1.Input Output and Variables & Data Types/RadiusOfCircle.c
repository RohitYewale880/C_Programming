/*Write a program which accept radius of circle from user and calculate its area.
Consider value of PI as 3.14. (Area = PI * Radius * Radius)*/

#include<stdio.h>
#include<conio.h>

int main()

{
    float Radius=0,PI=3.14,Area=0;

    printf("Enter the Radius of the Circle:",Radius);
    scanf("%f",&Radius);

    Area= PI * Radius * Radius;

    printf("Area of the Circle is:%f",Area);

    getch();
}
