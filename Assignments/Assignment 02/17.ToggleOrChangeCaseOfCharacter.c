///Write a program to accept a character from user and convert case (Toggle Case) of that character.

#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '/0';

    printf("Enter a Character To Toggle It :");
    scanf("%c",&ch);

    if ((ch >= 'A') && (ch <='Z'))
    {
        ch = ch + 32;
    }
    else if ((ch >= 'a') && (ch <='z'))
    {
        ch = ch - 32;
    }

    printf("\n\nThe Character After Toggle It Becomes : %c",ch);

    getch();
    return 0;
}
