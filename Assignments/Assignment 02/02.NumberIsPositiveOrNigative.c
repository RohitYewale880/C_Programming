///Write a program to check if a given number is positive or negative.

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    printf("Enter The Number To Check The Number Is Positive or Negative :");
    scanf("%d",&Num);

    if(Num >= 0)
    {
        printf("\n\nThe Given Number Is Positive");
    }
    else
    {
        printf("\n\nThe Given Number is Negative");
    }

    getch();
    return 0;
}
