
#include<stdio.h>
#include<conio.h>

int strcpyF(char*, char*);

int main()
{
    char Sstr[20] = "";
    char Dstr[20] = "";

    puts("Enter the string :");
    gets(Sstr);

    strcpyF(Sstr, Dstr);

    printf("\n\nstring Before Copy is => %s",Sstr);
    printf("\n\nstring After Copy is => %s $",Dstr);


    getch();
    return 0;
}

int strcpyF(char* cSstr, char* cDStr)
{
    int i = 0;
    while (cSstr[i] != '\0')
        {
            cDStr[i] = cSstr[i];
            i++;
        }

    return;
}


