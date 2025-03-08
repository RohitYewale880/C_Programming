///20.	Write a program that accepts two numbers from the user and swaps their values.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int No1 = 0, No2 = 0, Store = 0;

    printf("Enter first number to swap :\n");
    scanf("%d",&No1);
    printf("Enter secound number to swap :\n");
    scanf("%d",&No2);

    Store=No1;
    No1=No2;
    No2=Store;

    printf("\nNumber After swapping Number1 =%d And Number2= %d",No1,No2);

    getch();
    return 0;

}

