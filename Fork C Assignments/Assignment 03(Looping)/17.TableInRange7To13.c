///Write Program to display tables in range 7 to 13.

#include<stdio.h>
#include<conio.h>

int main()
{
    int Row = 0, Col = 0;

    printf("The Table in Range 7 to 13 is:\n\n");
    printf("================================================\n");

    for(Row = 1; Row <= 10; Row++)
    {
        for(Col = 7; Col <= 13;Col++)
        {
            Row * Col;
            printf("%4d",Row*Col);
        }
        printf("\n");
    }

    printf("================================================");

    getch();
    return 0;

}
