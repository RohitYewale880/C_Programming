///print * 4 by 7
#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0, C = 0;

    printf("\n ****** Pattern ****** \n\n");

    for( R = 1; R <= 7; R++ )          /// Row
    {
        for( C = 1; C <= 4; C++ )      /// Column
        {
            printf(" * ");
        }
        printf("\n");
    }

    printf("\n ======= Thanks ======== \n");

    getch();
    return 0;
}
