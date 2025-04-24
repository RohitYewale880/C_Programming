#include<stdio.h>
#include<conio.h>

void struprF(char[]);

int main()
{
    char str[20] = "";

    puts("Enter string to Convert Into Capital :");
    gets(str);

    struprF(str);

    printf("\n\nString After Capitalization given string is => %s",str);

    getch();
    return 0;
}

void struprF(char cStr[])
{
    int i = 0;
    while (cStr[i] != '\0')
        {
            if(cStr[i] >= 'a' && cStr[i] <= 'z')
            {
                cStr[i] = cStr[i] - 32;
            }
            i++;
        }

    return;
}


