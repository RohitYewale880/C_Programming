#include<stdio.h>
#include<conio.h>

int main()
{
    char str[20] = "";
    int i = 0;

    puts("Enter the string to Calculate the length :");
    gets(str);

    while (str[i] != '\0')
    {
        i++;
    }

    printf("\n\nLength of given string is => %d",i);

    getch();
    return 0;
}

