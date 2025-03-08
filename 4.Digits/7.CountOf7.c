<<<<<<< HEAD
/// Write the program to count the 7 in given number.


#include<stdio.h>
#include<conio.h>

int main()

{
    int Num = 0, Temp =0, Cnt_7 =0, Dig = 0;

    printf("Enter the number:");
    scanf("%d",&Num);

    Temp = Num;

    while (Temp > 0)
    {
        Dig = Temp%10;

        if ( Dig == 7)
        {
            Cnt_7++ ;
        }

        Temp = Temp / 10;
    }

    printf("The count of 7 in the %d is: %d",Num,Cnt_7);
    getch();
    return 0;
}
=======
/// Write the program to count the 7 in given number.


#include<stdio.h>
#include<conio.h>

int main()

{
    int Num = 0, Temp =0, Cnt_7 =0, Dig = 0;

    printf("Enter the number:");
    scanf("%d",&Num);

    Temp = Num;

    while (Temp > 0)
    {
        Dig = Temp%10;

        if ( Dig == 7)
        {
            Cnt_7++ ;
        }

        Temp = Temp / 10;
    }

    printf("The count of 7 in the %d is: %d",Num,Cnt_7);
    getch();
    return 0;
}
>>>>>>> 4196d8b (C_Programming)
