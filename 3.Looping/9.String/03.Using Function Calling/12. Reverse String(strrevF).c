

#include<stdio.h>
#include<conio.h>

int strrevF(char*, char*);

int main()
{
    char Sstr[20] = "";
    char Dstr[20] = "";

    puts("Enter the string :");
    gets(Sstr);

    strrevF(Sstr, Dstr);

    printf("\n\nstring After Reverse is => %s",Dstr);


    getch();
    return 0;
}

int strrevF(char* cSstr, char* cDStr)
{
    int i = 0, j = 0;
   while(cSstr[i] != '\0')
    {
        i++;
    }
    i--;

    while(cDStr[j] < cSstr[i])
    {
        cDStr[j] = cSstr[i];
        i--;
        j++;
    }
    return;
}


