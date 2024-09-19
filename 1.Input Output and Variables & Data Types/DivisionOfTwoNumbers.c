//Write a program to Dividing two numbers provided by the user and display the result.

#include<stdio.h>
#include<conio.h>

int main()

{
    int Num1,Num2,Div;

    printf("Enter Numbers:\n");
    scanf("%d%d",&Num1,&Num2);

    Div=Num1/Num2;
    printf("%d",Div);

    getch();
}

