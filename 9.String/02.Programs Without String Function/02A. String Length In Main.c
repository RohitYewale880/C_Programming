#include<stdio.h>
#include<conio.h>

int main()
{
    char str[20] = "";
    int i = 0;

    puts("Enter the string to Calculate the length :");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == '\0')
        {
            break;
        }
    }

    printf("\n\nLength of given string is => %d",i);

    getch();
    return 0;
}

