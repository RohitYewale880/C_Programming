#include<stdio.h>
#include<conio.h>

int strlenF(char[]);

int main()
{
    char str[20] = "";
    int Len = 0;

    puts("Enter the string to Calculate the length :");
    gets(str);

    Len = strlenF(str);

    printf("\n\nLength of given string is => %d",Len);

    getch();
    return 0;
}

int strlenF(char cStr[])
{
    int i = 0;
    while (cStr[i] != '\0')
        {
            i++;
        }

    return i;
}


