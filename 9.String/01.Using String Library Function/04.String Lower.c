#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char str[20] = {'\0'};

    puts("Enter the string to get Small letters :");
    gets(str);

    printf("\n\n String Before Lower : %s",str);
    getch();

    strlwr(str);

    printf("\n\n String After Lower : %s",str);

    getch();
    return 0;
}
