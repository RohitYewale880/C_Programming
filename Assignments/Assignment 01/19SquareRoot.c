///19.	Write a program to accept a number from the user and calculate the square root of that number, then display the result. (SquareRoot = sqrt(No))


#include<stdio.h>
#include<conio.h>

int  main()
{

    int No = 0, sroot = 0;

    printf("Enter any Number to get SquareRoot :");
    scanf("%d",&No);

    sroot = (sqrt(No));

    printf("The SquareRoot of %d is => %d",No,sroot);

    getch();
    return 0;
}
