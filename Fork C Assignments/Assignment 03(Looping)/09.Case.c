/*Accept character from user. If it is capital then display all the characters from the input characters till Z and if input character
is small then print all the characters in reverse order till a. In other cases, return directly.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char i = '/0', ch = '/0';

    printf("Enter Character:");
    scanf("%c",&ch);


    if((ch >= 'A') && (ch <= 'Z'))
    {
        for(i = 'ch'; ch <= 'Z'; ch++)
        {
            printf("%c ",ch);
        }
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        for(i = 'ch'; ch >= 'a'; ch--)
        {
            printf("%c ",ch);
        }
    }
    else
    {
        printf("Default Character....");
    }

    getch();
    return 0;
}
