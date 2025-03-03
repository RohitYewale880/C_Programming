///Write a program to accept a character from the user and determine if it is a vowel (a, e, i, o, u), a consonant, or other. Display the result.

#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '/0';

    printf("Enter Any Character To Check It Is Vowel, Consonant or Other  : ");
    scanf("%c",&ch);

    if((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
    {
        printf("\n\nGiven Character %c is Vowel..",ch);
    }
    else if((ch >= 'a') && (ch <='z'))
    {
        printf("\n\nGiven Character %c is Consonant..",ch);
    }
    else
    {
        printf("The Character &c is Other",ch);
    }

    getch();
    return 0;
}

