
#include<stdio.h>
#include<conio.h>

int main()
{
    char tep = '\0';
    char cSrc[20] = {'\0'};
    int i = 0, j = 0;

    printf("\nEnter a string To check palindrome of not :");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        i++;
    }
    i--;

    while(j < i)
    {
        if(cSrc[j] != cSrc[i])
        {
            break;
        }
        i--;
        j++;
    }

    if(j >= i)
    {
        printf("Given String is palindrome");
    }
    else
    {
        printf("Given String is not a palindrome");
    }


    getch();
    return 0;

}


