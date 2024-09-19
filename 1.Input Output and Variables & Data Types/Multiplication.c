//Write a program to multiply two numbers provided by the user and display the result.
#include<stdio.h>
#include<conio.h>

int main()

{
    int Num1,Num2,Mul;

    printf("Enter a Integer Number");
    scanf("%d%d",&Num1,&Num2);

    Mul=Num1*Num2;

    printf("The result of multiplying number is:%d",Mul);

    getch();
}
