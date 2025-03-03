///4.	Write a program to multiply two numbers provided by the user and display the result.

#include<stdio.h>
#include<conio.h>

int  main()
{
    int N1=0, N2=0, Mul=0;

    printf("Enter First Number:");
    scanf("%d",&N1);
    printf("Enter Secound Number:");
    scanf("%d",&N2);

    Mul=N1*N2;

    printf("Multiplication of %d and %d is => %d",N1,N2,Mul);

    getch();
    return 0;
}
