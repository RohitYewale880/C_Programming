///Find Maximum element in the array

#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[7]={}, i = 0, Max = 0;

    for(i = 0; i < 7; i++)
    {
        printf("Enter value of %d Element:",i+1);
        scanf("%d",&Arr[i]);
    }

    getch();
    printf("\n\n");


    for(i = 0; i < 7; i++)
    {
        if(i==0|| Arr[i]>Max)
        {
            Max=Arr[i];
        }
    }

    getch();

    printf("\n\nMaximum Array Element is :%d",Max);

    getch();
    return 0;
}

