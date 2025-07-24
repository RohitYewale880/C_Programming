

#include<stdio.h>
#include<conio.h>

int strrevF(char*);

int main()
{
    char Sstr[20] = "";

    puts("Enter the string :");
    gets(Sstr);

    strrevF(Sstr);

    printf("\n\nstring After Reverse is => %s",Sstr);


    getch();
    return 0;
}

int strrevF(char* cSstr)
{
    int i = 0, j = 0, tep = 0;

   while(cSstr[i] != '\0')
    {
        i++;
    }
    i--;

    while(j < i)
    {
        tep = cSstr[i];
        cSstr[i] = cSstr[j];
        cSstr[j] = tep;

        i--;
        j++;
    }
    return;
}


