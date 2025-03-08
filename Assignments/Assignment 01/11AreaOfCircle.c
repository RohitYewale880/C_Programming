#include<stdio.h>
#include<conio.h>

int main()
{


    float Area = 0.0 ,radius = 0.0;

    printf("Enter Radius :");
    scanf("%f",&radius);

    Area = 3.14 * radius * radius;

    printf("Area Of Circle Is : %f",Area);
    getch();
    return 0;
}
