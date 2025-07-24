///Write a program to calculate the sum of 10 numbers inputted by the user.

#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, No = 0, Sum = 0;

    for(i = 1; i <= 10; i++)
    {
        printf("Enter Number %d : ",i);
        scanf("%d",&No);
    }

    for(i = 1; i <= 10; i++)
    {
        Sum += No;
    }

    printf("\n\nSum of Entered Number Is => %d",Sum);

    getch();
    return 0;
}
