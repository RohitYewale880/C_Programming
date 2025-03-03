///16.	Write a program which accept temperature in Fahrenheit and convert it into Celsius.  (1 Celsius = (Fahrenheit -32) * (5/9))

#include<stdio.h>
#include<conio.h>

int main()
{
    float Far = 0.0, cel = 0.0;
    printf("Enter the Temperature in Fahrenheit :");
    scanf("%f",&Far);

    cel = ((Far - 32) * (5.0/9.0));

    printf("%0.2f Fahrenheit is %0.2f Celsius",Far,cel);
    getch();
    return 0;
}
