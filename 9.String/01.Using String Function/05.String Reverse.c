#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char str[20] = {'\0'};

    puts("Enter the string to get Reverse String :");
    gets(str);

    printf("\n\n String Before Reverse : %s",str);
    getch();

    strrev(str);

    printf("\n\n String After Reverse : %s",str);

    getch();
    return 0;
}
