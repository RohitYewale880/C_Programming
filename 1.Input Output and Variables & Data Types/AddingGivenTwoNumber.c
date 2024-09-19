//Create a program to add two numbers provided by the user and display the result.
#include<stdio.h>
#include<conio.h>

int main()

{
    int Num1, Num2, Sum;

    printf("Enter integer number:");
    scanf("%d%d",&Num1,&Num2);

    Sum=Num1+Num2;

    printf("The result of Adding number is:%d", Sum);

    getch();

}
