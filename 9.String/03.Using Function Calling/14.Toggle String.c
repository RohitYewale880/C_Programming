

#include<stdio.h>
#include<conio.h>

int strtogF(char*);

int main()
{
    char Sstr[20] = "";

    puts("Enter the string :");
    gets(Sstr);

    strtogF(Sstr);

    printf("\n\nstring After Toggle is => %s",Sstr);


    getch();
    return 0;
}

int strtogF(char* cSstr)
{
    int i = 0;

   while(cSstr[i] != '\0')
    {
        if((cSstr[i] >= 'a') && (cSstr[i] <= 'z'))
        {
            cSstr[i] = cSstr[i] - 32;
        }
        else if((cSstr[i] >= 'A') && (cSstr[i] <= 'Z'))
        {
            cSstr[i] = cSstr[i] + 32;
        }
        i++;
    }
}



