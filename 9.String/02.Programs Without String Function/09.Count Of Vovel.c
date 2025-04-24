
#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int i = 0, cnt = 0;

    printf("\nEnter a string Get Count of Vowels :");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if((cSrc[i] == 'A') || (cSrc[i] == 'a') || (cSrc[i] == 'E') || (cSrc[i] == 'e') || (cSrc[i] == 'I') || (cSrc[i] == 'i') || (cSrc[i] == 'O') || (cSrc[i] == 'o') || (cSrc[i] == 'U') || (cSrc[i] == 'u'))
        {
            cnt++;
        }
        i++;
    }

    printf("\nCount of Vowels  is : %d",cnt);

    getch();
    return 0;

}




