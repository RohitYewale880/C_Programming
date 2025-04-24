
#include<stdio.h>
#include<conio.h>

int SmallCountF(char*);

int main()
{
    char str[20] = "";
    int Small_Cnt = 0;

    puts("Enter the string to Calculate the The Small Letters :");
    gets(str);

    Small_Cnt = SmallCountF(str);

    printf("\n\nCount of Small Letters in string is => %d",Small_Cnt);

    getch();
    return 0;
}

int SmallCountF(char* cStr)
{
    int i = 0, cnt = 0;
    while (cStr[i] != '\0')
        {
            if(cStr[i] >='a' && cStr[i] <= 'z')
            {
                cnt++;
            }
            i++;
        }

    return cnt;
}




