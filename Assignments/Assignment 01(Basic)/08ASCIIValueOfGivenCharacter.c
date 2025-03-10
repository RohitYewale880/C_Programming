///Write Program to find out ASCII value of given character.


#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Character : ");
    ch = getche();

    printf("\n ASCII Value for Character %c is = %d.",ch, ch);

    printf("\n Thanks");

    getch();
    return 0;
}
