/// Print Alphabets in User Specified Range.

#include<stdio.h>
#include<conio.h>

int main()
{
    char Sp = '\0', Ep = '\0';

    printf("\n Enter Start Point : ");
    scanf("%c",&Sp);
    printf("\n Enter End Point : ");
    scanf(" %c",&Ep);

    printf("\n Given Letters From %c to %c => \n", Sp, Ep);

    while( Sp <= Ep )
    {
        printf("\n %c",Sp);
        Sp++;
    }

    getch();
    return 0;
}

