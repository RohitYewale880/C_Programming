///Program to Check Given Character is UpperCase Or LowerCase

#include<stdio.h>
#include<conio.h>

int main()

{
    char ch = '\0';
    printf("Enter any Alphabet:\n\n");
    scanf("%c",&ch);

    if ((ch >= 'A') && (ch <= 'Z'))
    {
        printf("The Given Character %c is in Uppercase.\n\n",ch);

    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        printf("The Given Character %c is in Lowercase.\n\n",ch);
    }
    else
    {
        printf("Invalid Character Enter Other Character.\n\n");
    }
    getch();
    return 0 ;
}
