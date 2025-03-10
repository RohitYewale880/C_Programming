/*Write a program to perform the bitwise AND operation between two integers. The program Accept input
two integer values, apply the bitwise AND operator, and display the result....*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1 = 0, Num2 = 0, Res = 0;

    printf("Enter the First Number:");
    scanf("%d",&Num1);
    printf("Enter the Secound Number:");
    scanf("%d",&Num2);

    Res = Num1 & Num2;

    printf("The result of perform AND between %d and %d is :%d", Num1, Num2, Res);

    getch();
    return 0;
}


