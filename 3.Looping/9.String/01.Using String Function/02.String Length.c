#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char str[20] = {'\0'};
    int Len = 0;

    puts("Enter the string to Calculate the length :");
    gets(str);

    Len = strlen(str);

    getch();

    printf("\n\n Length of the string <%s> is => %d",str,Len);

    getch();
    return 0;
}
