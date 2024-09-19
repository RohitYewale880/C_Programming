///Program to Check Given Character is Alphabet Or Digit

#include<stdio.h>
#include<conio.h>

int main()

{
    char ch = '\0';
    printf("Enter any Character Or Digit:\n\n");
    scanf("%c",&ch);

    if (((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
    {
        printf("The %c is Alphabet.\n",ch);

    }
    else if ((ch >= '0') && (ch <= '9'))
    {
        printf("The %c is Digit.\n",ch);
    }
    else
    {
        printf("Invalid Character Enter Other.\n");
    }
    getch();
    return 0 ;
}

