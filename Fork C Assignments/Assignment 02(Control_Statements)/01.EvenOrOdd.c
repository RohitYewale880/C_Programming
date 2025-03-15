///1.	Write a program to check if a given number is even or odd...

#include<stdio.h>
#include<conio.h>


int main()
{
    int Num = 0;

    printf("Enter the Number to check the Number is even or odd : ");
    scanf("%d",&Num);

    if((Num % 2 == 0) && (Num == 0))
    {
        printf("\nGiven Number %d is Even",Num);
    }
    else
    {
        printf("\nGiven Number %d is Odd",Num);
    }

    getch();
    return 0;
}
