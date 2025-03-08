///Write a program to accept a character from the user and check if it is an upper case letter or a lower case letter.


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
    else
    {
        printf("\n\nEnter Proper Character..");
    }

    getch();
    return 0;
}
