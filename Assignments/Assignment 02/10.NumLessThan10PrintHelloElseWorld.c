/*Write a program to accept a number from the user and check if it is less than 10.
If it is less than 10, print "Hello"; otherwise, print "World"*/

#include<stdio.h>
#include<conio.h>


int main()
{
    int Num = 0;

    printf("Enter the Number : ");
    scanf("%d",&Num);

    if(Num < 10)
    {
        printf("\nHello",Num);
    }
    else
    {
        printf("\nWorld",Num);
    }

    getch();
    return 0;
}
