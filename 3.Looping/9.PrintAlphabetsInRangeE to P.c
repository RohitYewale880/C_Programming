/// Print Alphabets in Range E to P
#include<stdio.h>
#include<conio.h>

int main()

{
    char ch = '\0' ;

    printf("\n Alphabets In Range E To P is: => \n");
    ch = 'E' ;

    while (ch <= 'P')
    {
        printf(" %c \n", ch);
        ch++;
    }
    getch();
    return 0;
}



