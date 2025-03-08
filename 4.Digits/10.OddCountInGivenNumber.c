<<<<<<< HEAD
///Write the program to calculate the odd count in the given number.

#include<stdio.h>
#include<conio.h>

int main ()

{
    int Num = 0, Dig = 0, O_Cnt = 0, Temp = 0;

    printf("Enter the any number:");
    scanf("%d",&Num);

    Temp = Num;

    while (Temp>0)
    {
        Dig = Temp % 10;
        if ( Dig % 2 == 1)
        {
            O_Cnt++ ;
        }

        Temp = Temp / 10;
    }
       printf("The Even Count present in the given Number %d is : %d",Num,O_Cnt);

       getch();
       return 0 ;
}

=======
///Write the program to calculate the odd count in the given number.

#include<stdio.h>
#include<conio.h>

int main ()

{
    int Num = 0, Dig = 0, O_Cnt = 0, Temp = 0;

    printf("Enter the any number:");
    scanf("%d",&Num);

    Temp = Num;

    while (Temp>0)
    {
        Dig = Temp % 10;
        if ( Dig % 2 == 1)
        {
            O_Cnt++ ;
        }

        Temp = Temp / 10;
    }
       printf("The Even Count present in the given Number %d is : %d",Num,O_Cnt);

       getch();
       return 0 ;
}

>>>>>>> 4196d8b (C_Programming)
