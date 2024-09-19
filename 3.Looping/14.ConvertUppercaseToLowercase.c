/// Convert Alphabet Uppercase to Lowercase.



#include<stdio.h>
#include<conio.h>

int main()

{
    char ch = '\0';

    printf("Convert %c into LowerCase ",ch);

    while (ch >= ch + 32)
    {
        printf("%c",ch);
    }

    getch();
    return 0;
}
