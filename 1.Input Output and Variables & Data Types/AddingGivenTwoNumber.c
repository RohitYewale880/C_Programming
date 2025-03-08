///Create a program to add two numbers provided by the user and display the result.
#include<stdio.h>
#include<conio.h>

int main()

{
    int Num1 = 0, Num2 = 0, Sum = 0;

    printf("Enter First number:");
    scanf("%d",&Num1);
    printf("Enter SSecond number:");
    scanf("%d",&Num2);

    Sum =Num1 + Num2;

    printf("The result of Adding number is:%d", Sum);

    getch();

}
