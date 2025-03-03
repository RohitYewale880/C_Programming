/// Calculate the total and percentage of three Subject

#include<stdio.h>
#include<conio.h>

int main()
{

    int Num1= 0, Num2 = 0, Num3= 0, Sum = 0;
    float Per = 0.0;

    printf("Enter the First Subject Marks :");
    scanf("%d",&Num1);
    printf("Enter the Second Subject Mark :");
    scanf("%d",&Num2);
    printf("Enter the Third Subject Mark :");
    scanf("%d",&Num3);

    Sum = Num1 + Num2 + Num3;
    Per = float(Sum) / 3;

    printf("The Sum Of Three Subject Is : %d\n\n", Sum);
    printf("Percentage: %f.", Per);

    getch();
    return 0;
}
