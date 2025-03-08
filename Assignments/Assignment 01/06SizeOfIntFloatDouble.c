///6.	Write Program to print size of int, float, double, etc.

#include<stdio.h>
#include<conio.h>

int main ()
{
    printf("Size of char: %lu byte\n",sizeof(char));
    printf("Size of float: %lu byte\n",sizeof(float));
    printf("Size of int: %lu byte\n",sizeof(int));
    printf("Size of double: %lu byte\n",sizeof(double));

    getch();
    return 0;

}
