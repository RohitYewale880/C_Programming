
#include<stdio.h>
#include<conio.h>

int SpaceCountF(char*);

int main()
{
    char str[20] = "";
    int SP_Cnt = 0;

    puts("Enter the string to Calculate the Spacecount :");
    gets(str);

    SP_Cnt = SpaceCountF(str);

    printf("\n\nLength of Space in string is => %d",SP_Cnt);

    getch();
    return 0;
}

int SpaceCountF(char* cStr)
{
    int i = 0, cnt = 0;
    while (cStr[i] != '\0')
        {
            if(cStr[i] == ' ')
            {
                cnt++;
            }
            i++;
        }

    return cnt;
}


