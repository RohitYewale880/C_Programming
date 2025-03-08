//Write a program to Dividing two numbers provided by the user and display the result.

#include<stdio.h>
#include<conio.h>

int main()

{
    int Num1 = 0, Num2 = 0, Div =  0;

    printf("Enter First number:");
    scanf("%d",&Num1);
    printf("Enter Second number:");
    scanf("%d",&Num2);

    Div = Num1 / Num2;
    printf("The Division of Given Numbers: %d",Div);

    getch();
}

