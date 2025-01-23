/// Print Reverse Table of User Entered Number Using for.


#include<stdio.h>
#include<conio.h>

int main()

{
    int Num = 0, Cnt = 0;
    printf("Enter Any Number:\n");
    scanf("%d",&Num);
    printf("\n Table of %d is => \n", Num);

    for (Cnt=10; Cnt >= 1; Cnt--)
    {
        printf(" %3d * %3d = %3d \n",Num, Cnt, (Num *Cnt));
    }
    getch();
    return 0;
}

