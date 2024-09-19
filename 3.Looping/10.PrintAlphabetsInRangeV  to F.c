/// Print Alphabets in Range V  to F

#include<stdio.h>
#include<conio.h>

int main ()

{
    char ch = '\0' ;

    printf("Print The Alphabets in Range V to F :\n");

    ch = 'V';

    while (ch >= 'F')
    {
        printf (" %c \n",ch);
        ch--;

    }
        getch ();
        return 0;

}
