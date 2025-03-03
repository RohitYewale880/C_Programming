///14.	Write a program that accepts the side length of a square from the user and calculates its area. (Area of Square = Side * Side)


#include<stdio.h>
#include<conio.h>

int main()
{
    float slength = 0.0, Area = 0.0;

    printf("Enter the Side Length of Square:");
    scanf("%f",&slength);

    Area = slength * slength;

    printf("Area of the Square is => %0.4f",Area);

    getch();
    return 0;
}
