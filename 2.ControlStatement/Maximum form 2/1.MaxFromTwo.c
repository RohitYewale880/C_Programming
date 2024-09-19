/// Maximum From 2 Numbers - Using if else


#include<stdio.h>
#include<conio.h>

int main()

{
    int Num1 = 0, Num2 = 0;
    printf("Enter Numbers:");
    scanf("%d%d",&Num1,&Num2);

    if (Num1>Num2)
        printf("The %d is Maximum.",Num1);
    else
        printf("The %d is Maximum.",Num2);

    getch();
    return 0;
}
