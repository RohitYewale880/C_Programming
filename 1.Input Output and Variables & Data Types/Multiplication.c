//Write a program to multiply two numbers provided by the user and display the result.
#include<stdio.h>
#include<conio.h>

int main()

{
    int Num1 = 0, Num2 = 0, Mul = 0;

    printf("Enter a First Number");
    scanf("%d",&Num1);
    printf("Enter a Secound Number");
    scanf("%d",&Num2);

    Mul = Num1 * Num2;

    printf("The result of multiplying number is:%d",Mul);

    getch();
}
