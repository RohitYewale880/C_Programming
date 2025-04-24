#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    char cDest[20] = {'\0'};
    int i = 0;

    printf("\nEnter a string :");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        cDest[i] = cSrc[i];
        i++;
    }

    cDest[i] = '\0';

    printf("\nGiven string is : %s !!",cSrc);
    printf("\nGiven string After copy is : %s $$",cDest);

    getch();
    return 0;

}
