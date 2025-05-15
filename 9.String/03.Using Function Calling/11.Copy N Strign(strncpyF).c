
#include<stdio.h>
#include<conio.h>

int strncpyF(char*, char*, int);

int main()
{
    char Sstr[20] = "";
    char Dstr[20] = "";

    puts("Enter the string :");
    gets(Sstr);

    strcpyF(Sstr, Dstr, 5);

    printf("\n\nstring Before Copy is => %s",Sstr);
    printf("\n\nstring After Copy is => %s",Dstr);


    getch();
    return 0;
}

int strcpyF(char* cSstr, char* cDStr, int* cnt)
{
    int i = 0;
    while (cSstr[i] != '\0')
        {
            if(i < cnt)
            {
                 cDStr[i] = cSstr[i];
            }

            i++;
        }
    return;
}


