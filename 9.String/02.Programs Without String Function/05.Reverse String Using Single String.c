#include<stdio.h>
#include<conio.h>

int main()
{
    char tep = '\0';
    char cSrc[20] = {'\0'};
    int i = 0, j = 0;

    printf("\nEnter a string :");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        i++;
    }
    i--;

    while(j < i)
    {
        tep = cSrc[i];
        cSrc[i] = cSrc[j];
        cSrc[j] = tep;

        i--;
        j++;
    }

    printf("\nReverse string is : %s",cSrc);

    getch();
    return 0;

}


