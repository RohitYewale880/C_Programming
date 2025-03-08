///18.	Write a program that accepts a number from the user and calculates the cube of that number. (Cube = Number * Number * Number)

#include<stdio.h>
#include<conio.h>

int main()
{

    int Num = 0, CB = 0;

    printf("Enter Number To Get Cube:");
    scanf("%d",&Num);

    CB = Num * Num *Num;

    printf("Cube Of %d is : %d", Num, CB );
    getch();
    return 0;
}
