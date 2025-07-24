
#include<stdio.h>
#include<conio.h>

void VowelConsonantCountF(char*,int*, int*, int*);

int main()
{
    char str[20] = "";
    int V_Cnt = 0, C_Cnt = 0, O_Cnt = 0;

    puts("Enter the string to Calculate the The Small Letters :");
    gets(str);

    VowelConsonantCountF(str, &V_Cnt, &C_Cnt, &O_Cnt);

    printf("\n\nCount of Vowels in string is => %d",V_Cnt);
    printf("\n\nCount of Consonent in string is => %d",C_Cnt);
    printf("\n\nCount of Other Letters in string is => %d",O_Cnt);

    getch();
    return 0;
}

void VowelConsonantCountF(char* cStr, int* V, int* C, int* O)
{
    int i = 0;
    while (cStr[i] != '\0')
        {
            if(cStr[i] =='A' || cStr[i] == 'a' || cStr[i] == 'E' || cStr[i] == 'e' || cStr[i] == 'I' || cStr[i] == 'i' || cStr[i] == 'O' || cStr[i] == 'o' || cStr[i] == 'U' || cStr[i] == 'u')
            {
                (*V)++;
            }
            else if((cStr[i] >= 'A' && cStr[i] <= 'Z') || (cStr[i] >= 'a' && cStr[i] <= 'z'))
            {
                (*C)++;
            }
            else
            {
                (*O)++;
            }
            i++;
        }

    return;
}






