#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int i = 0;

    printf("\nEnter a string To convert to Uppercase :");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if((cSrc[i] >= 'a') && (cSrc[i] <= 'z'))
        {
            cSrc[i] = cSrc[i] - 32;
        }
        i++;
    }

    printf("\nAfter Convert Upper Case string is : %s",cSrc);

    getch();
    return 0;

}



