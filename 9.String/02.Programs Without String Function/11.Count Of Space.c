
#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int i = 0, cnt = 0;

    printf("\nEnter a string Get Count of Spaces :");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] == ' ')
        {
            cnt++;
        }
        i++;
    }

    printf("\nCount of Spaces  is : %d",cnt);

    getch();
    return 0;

}





