/// Print Table of User Entered Number.

#include<stdio.h>
#include<conio.h>

int main()

{
    int Num = 0, Cnt = 1;
    printf("Enter Any Number:\n");
    scanf("%d",&Num);
    printf("\n Table of %d is => \n", Num);

    while (Cnt <=10)
    {
        printf(" %3d * %3d = %3d \n",Num, Cnt, (Num *Cnt));
        Cnt++;
    }
    getch();
    return 0;
}
