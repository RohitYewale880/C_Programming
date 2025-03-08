///Write a program to accept a character from the user and check whether that character is a vowel (a, e, i, o, u). Display the result.


#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '/0';

    printf("Enter Any Character To Check It Is Vowel or Not : ");
    scanf("%c",&ch);

    if((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
    {
        printf("\n\nGiven Character is Vowel..");
    }
    else
    {
        printf("\n\nGiven Character is Not Vowel..");
    }

    getch();
    return 0;
}
