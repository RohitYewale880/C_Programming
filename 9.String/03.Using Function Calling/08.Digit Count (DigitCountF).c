
#include<stdio.h>
#include<conio.h>

int DigitCountF(char*);

int main()
{
    char str[20] = "";
    int Dig_Cnt = 0;

    puts("Enter the string to Calculate the The Small Letters :");
    gets(str);

    Dig_Cnt = DigitCountF(str);

    printf("\n\nCount of Small Letters in string is => %d",Dig_Cnt);

    getch();
    return 0;
}

int DigitCountF(char* cStr)
{
    int i = 0, cnt = 0;
    while (cStr[i] != '\0')
        {
            if(cStr[i] >='0' && cStr[i] <= '9')
            {
                cnt++;
            }
            i++;
        }

    return cnt;
}





