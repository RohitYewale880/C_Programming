#include<stdio.h>
#include<conio.h>

int main()
{

    int Kmeter = 0, Meter = 0;

    printf("Enter Value Of Kilometer :");
    scanf ("%d",&Kmeter);

    Meter = Kmeter * 1000;

    printf("%d Kilometer = %d Meter", Kmeter, Meter);

    getch();
    return 0;

}
