///Write a program to accept a character from user and check whether it is alphabet or not(A-Z , a-z).

#include<stdio.h>
#include<conio.h>

int main()

{
    char ch = '/0';

    printf("Enter Character To Check It is Alphabet or Not : ");
    scanf("%c",&ch);

    if(((ch >= 'A') && (ch <='Z')) || ((ch >= 'a') && (ch <='z')))
    {
        printf("\n\nThe Given Character is Alphabet...");
    }
    else
    {
        printf("\n\nThe Given Character Is Not Alphabet...");
    }

    getch();
    return 0;
}
