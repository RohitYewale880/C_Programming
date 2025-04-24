
#include<stdio.h>
#include<conio.h>

void strlwrF(char*);

int main()
{
    char str[20] = "";

    puts("Enter string to Convert Into Small Letter :");
    gets(str);

    strlwrF(str);

    printf("\n\nString After Convert Small Letter given string is => %s",str);

    getch();
    return 0;
}

void strlwrF(char* cStr)
{
    int i = 0;
    while (cStr[i] != '\0')
        {
            if(cStr[i] >= 'A' && cStr[i] <= 'Z')
            {
                cStr[i] = cStr[i] + 32;
            }
            i++;
        }

    return;
}


