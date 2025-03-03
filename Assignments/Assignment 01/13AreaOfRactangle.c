///13.	Write a program which accept width & height of rectangle from user and calculate its area.

#include<stdio.h>
#include<conio.h>

int main()
{
    float width = 0.0, height = 0.0, area =0.0;

    printf("Enter width :");
    scanf("%f",&width);
    printf("Enter height :");
    scanf("%f",&height);

    area = height * width;

    printf("Area Of Rectangle is => %0.0f",area);
    getch();
    return 0;
}
