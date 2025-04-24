#include<stdio.h>
#include<conio.h>

int main()
{
    char str[20] = "";
    int Len = 0;

    puts("Enter the string to Calculate the length :");
    gets(str);

    system("cls");

    printf("\n\nLength of given string is => %d", printf(str));

    getch();
    return 0;
}

