///Write a program to accept a character from the user and determine if it is an upper case letter, lower case letter, digit, or special symbol.

#include<stdio.h>
#include<conio.h>

int main()

{
    char ch = '/0';

    printf("Enter A Character To Check It is UpperCase or In LowerCase : ");
    scanf("%c",&ch);

    if((ch >= 'A') && (ch <='Z'))
    {
        printf("\n\nThe Given Character is in UpperCase...");
    }
    else if((ch >= 'a') && (ch <='z'))
    {
        printf("\n\nThe Given Character is in LowerCase...");
    }
    else if((ch >= '0') && (ch <='9'))
    {
        printf("\n\nIt is Digit..");
    }
    else
    {
        printf("\n\nIt Is Special Symbol..");
    }

    getch();
    return 0;
}
