//Max from three numbers.

#include<stdio.h>
#include<conio.h>

int main()

{
    int Num1 = 0, Num2 = 0, Num3 = 0;

    printf("Enter value of Num1:");
    scanf("%d",&Num1);
    printf("Enter value of Num2:");
    scanf("%d",&Num2);
    printf("Enter value of Num3:");
    scanf("%d",&Num3);

   if (Num1 > Num2)
        {
                    if(Num1 > Num3)
                    {
                                printf("\n Max is = %d", Num1);
                    }
                    else
                    {
                                printf("\n Max is = %d", Num3);
                    }
        }
    else if(Num2 > Num3 )
        {
                    printf("\n Max is = %d", Num2);
        }
    else
        {
                    printf("\n Max is = %d", Num3);
        }


                printf("Thank you...\n");


    getch();
    return 0;


}
