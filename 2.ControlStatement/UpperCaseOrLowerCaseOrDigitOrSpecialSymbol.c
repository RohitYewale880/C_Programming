//Program to Check Given Character is UpperCase Or LowerCase Or Digit Or Special Symbol

#include<stdio.h>
#include<conio.h>

int main()

{
    char ch = '\0';
    printf("Enter any Character Or Digit Or Symbol:\n\n");
    scanf("%c",&ch);

    if ((ch >= 'A') && (ch <= 'Z'))
    {
        printf("The %c is Alphabet in UpperCase.\n",ch);

    }

    else if((ch >= 'a') && (ch <= 'z'))
    {
        printf("The %c is Alphabet in LowerCase.\n",ch);
    }

    else if ((ch >= '0') && (ch <= '9'))
    {
        printf("The %c is Digit.\n",ch);
    }

    else
    {
        printf("The %c is Symbol.\n",ch);
    }
    getch();
    return 0 ;
}
