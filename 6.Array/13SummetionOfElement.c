///Create accept display array using loop  find Summation of given Element

#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[7]={}, i = 0, Sum = 0;

    for(i = 0; i < 7; i++)
    {
        printf("Enter value of %d Element:",i+1);
        scanf("%d",&Arr[i]);
    }

    getch();
    printf("\n\n");


    for(i = 0; i < 7; i++)
    {
        printf("value of %d Element is:%d\n",i+1,Arr[i]);

        Sum = Sum + Arr[i];
    }

    getch();

    printf("\n\nSome Count Of Array Element is :%d",Sum);

    getch();
    return 0;
}

