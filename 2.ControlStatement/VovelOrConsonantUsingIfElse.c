///Program to Check Given Character is Vowel Or Consonant - If Else


#include<stdio.h>
#include<conio.h>

int main()

{
    char ch = '\0';
    printf("Enter the Character To Check:\n\n");
    scanf("%c",&ch);

    if((ch == 'A') || (ch == 'a')||(ch == 'E') || (ch == 'e')||(ch == 'I') || (ch == 'i')||(ch == 'O') || (ch == 'o')||(ch == 'U') || (ch == 'u') )
    {
        printf("\n\nGiven Character is Vowel.\n");
    }

    else if(((ch >= 'A') && (ch<='Z')) || ((ch >= 'a')&&(ch<='z')))
    {
        printf("\n\nGiven Character is Consonant.\n");
    }

    else
    {
        printf("Invalid Character...");
    }
    getch();
    return 0;
}
