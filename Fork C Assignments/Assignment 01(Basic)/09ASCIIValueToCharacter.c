///Write a program to find the character for an ASCII value provided by the user and display the result.

#include<stdio.h>
#include<conio.h>

int main()
{
    int A_Val = 0;

    printf("\n Enter ASCII Value : ");
    scanf("%d",&A_Val);

    printf("\n Character for ASCII Value %d is = %c.",A_Val, A_Val);

    printf("\n Thanks");

    getch();
    return 0;
}
