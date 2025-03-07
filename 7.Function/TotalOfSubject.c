///Write a program to calculate Total marks using Function

#include<stdio.h>
#include<conio.h>

int Calc_Total(int a, int b, int c)
{
    int t = 0;
    t = a + b + c;
    return t;
}

int  main()
{
    int Phy = 0, Maths = 0, Che = 0, Total = 0;

    printf("Enter Marks in Physics:\n");
    scanf("%d",&Phy);
    printf("Enter Marks in Maths:\n");
    scanf("%d",&Maths);
    printf("Enter Marks in Chemistry:\n");
    scanf("%d",&Che);


    Total = Calc_Total(Phy, Maths, Che);

    printf("\n\nTotal Of All Subject Marks Is :%d",Total);

    getch();
    return 0;
}
