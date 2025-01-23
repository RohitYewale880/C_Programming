///Program to Check Given Character is Vowel Or Consonant - Switch

#include<stdio.h>
#include<conio.h>

int main()

{
    char ch = '\0';
    printf("Enter the Character To Check: ");
    scanf("%c",&ch);
    getch();

    switch (ch)
    {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                    printf("The given Character is Vowel");
                    break ;

            case 'b':
            case 'B':
            case 'c':
            case 'C':
            case 'd':
            case 'D':
            case 'f':
            case 'F':
            case 'g':
            case 'G':
            case 'h':
            case 'H':
            case 'j':
            case 'J':
            case 'k':
            case 'K':
            case 'l':
            case 'L':
            case 'm':
            case 'M':
            case 'n':
            case 'N':
            case 'p':
            case 'P':
            case 'q':
            case 'Q':
            case 'r':
            case 'R':
            case 's':
            case 'S':
            case 't':
            case 'T':
            case 'v':
            case 'V':
            case 'w':
            case 'W':
            case 'x':
            case 'X':
            case 'y':
            case 'Y':
            case 'z':
            case 'Z':
                printf("Given Character is Consonant.");
                break ;

            default :
                printf("Invalid Character..");


    }

        getch();
        return 0;
}


