#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char Fstr[20] = {'\0'};
    char Sstr[20] = {'\0'};

    puts("Enter the First string :");
    gets(Fstr);

    strcpy(Sstr, Fstr);

    getch();

    printf("\nFirst string is %s !!!",Fstr);
    printf("\nSecond string After copy First String %s $$$",Sstr);

    getch();
    return 0;
}
