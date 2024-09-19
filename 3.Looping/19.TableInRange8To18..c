///Print Table In Range 8 To 18.

#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0, C = 0;

    printf("The Table in Range 8 to 18 is:\n\n");

    for ( R = 1; R<=10; R++)
    {
        for (C = 8; C<=18; C++)
        {
            R*C;
            printf("%3d ",R*C);
        }
        printf("\n");
    }

    getch();
    return 0;
}
