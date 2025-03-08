///Write a program to accept a number from the user and print that number of * on screen.

#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, No = 0;

    printf("Enter a Number to Print Stars :");
    scanf("%d",&No);

    for(i = 1; i <= No; i++)
    {
        printf("\n%3d.*",i);
    }

    getch();
    return 0;
}
