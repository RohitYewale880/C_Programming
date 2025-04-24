#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char str[20] = {'\0'};

    puts("Enter the string to get Capitalize :");
    gets(str);

    printf("\n\n String Before capitalization : %s",str);
    getch();

    strupr(str);

    printf("\n\n String After capitalization : %s",str);

    getch();
    return 0;
}
