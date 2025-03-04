///Write a program to calculate and print the factorial of a given number.



#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Fat = 0, Temp = 0;

    printf("Enter a Number :");
    scanf("%d",&No);

    Temp = No;

    for(Fat = 1; Temp >= 1; Temp--)
    {
       Fat = Fat * Temp;
    }

    printf("The Factorial of Given Number %d is : %d",No,Fat);

    getch();
    return 0;
}
