
#include<stdio.h>
#include<conio.h>

int CapCountF(char*);

int main()
{
    char str[20] = "";
    int Cap_Cnt = 0;

    puts("Enter the string to Calculate the The Capital Letters :");
    gets(str);

    Cap_Cnt = CapCountF(str);

    printf("\n\nCount of Capital Letters in string is => %d",Cap_Cnt);

    getch();
    return 0;
}

int CapCountF(char* cStr)
{
    int i = 0, cnt = 0;
    while (cStr[i] != '\0')
        {
            if(cStr[i] >='A' && cStr[i] <= 'Z')
            {
                cnt++;
            }
            i++;
        }

    return cnt;
}




