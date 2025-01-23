#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, dsum = 0, Dig = 0, Xno =0;

    printf("Enter Any Number To Calculate Digit Sum:\n");
    scanf("%d",&No);

   for(Xno = No; Xno > 0 ; Xno /= 10 )
    {
        dsum += (Xno % 10);
    }


    printf("The sum of Digits in %d is : %d",No,dsum);

    getch();
    return 0;

}

