
#include<stdio.h>
#include<conio.h>

int SpaceTabCountF(char*);

int main()
{
    char str[20] = "";
    int Cnt = 0;

    puts("Enter the string to Calculate the Space And Tab count :");
    gets(str);

    Cnt = SpaceTabCountF(str);

    printf("\n\nCount of Space And Tab in string is => %d",Cnt);

    getch();
    return 0;
}

int SpaceTabCountF(char* cStr)
{
    int i = 0, cnt = 0;
    while (cStr[i] != '\0')
        {
            if(cStr[i] == ' ' || cStr[i] == '\t')
            {
                cnt++;
            }
            i++;
        }

    return cnt;
}



