///Write a program that accepts a number from the user and checks if it is even or odd using the ternary operator.


#include<stdio.h>
#include<conio.h>


int main()
{
    int Num = 0;

    printf("Enter the Number to check the Number is even or odd : ");
    scanf("%d",&Num);

    ((Num % 2 == 0) ? printf("\nGiven Number %d is Even",Num) : printf("\nGiven Number %d is Odd",Num));

    getch();
    return 0;
}
