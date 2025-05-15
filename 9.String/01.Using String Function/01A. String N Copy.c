#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char Fstr[20] = {'\0'};
    char Sstr[20] = {'\0'};

    puts("\nEnter the First string :");
    gets(Fstr);
    puts("\nEnter the Seccond string :");
    gets(Sstr);

    printf("\nFirst string Before Copy is %s !!!",Fstr);
    printf("\nSecond string Before Copy is %s $$$",Sstr);

    getch();

    strncpy(Fstr, Sstr, 4);

    printf("\n\n\nFirst string After Copy is %s !!!",Fstr);
    printf("\nSecond string After Copy is %s $$$",Sstr);

    getch();
    return 0;
}
