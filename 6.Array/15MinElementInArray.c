<<<<<<< HEAD
///Find Minimum element in the array

#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[7]={}, i = 0, Min = 0;

    for(i = 0; i < 7; i++)
    {
        printf("Enter value of %d Element:",i+1);
        scanf("%d",&Arr[i]);
    }

    getch();
    printf("\n\n");


    for(i = 0; i < 7; i++)
    {
        if(i==0|| Arr[i]<Min)
        {
            Min=Arr[i];
        }
    }

    getch();

    printf("\n\nMaximum Array Element is :%d",Min);

    getch();
    return 0;
}

=======
///Find Minimum element in the array

#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[7]={}, i = 0, Min = 0;

    for(i = 0; i < 7; i++)
    {
        printf("Enter value of %d Element:",i+1);
        scanf("%d",&Arr[i]);
    }

    getch();
    printf("\n\n");


    for(i = 0; i < 7; i++)
    {
        if(i==0|| Arr[i]<Min)
        {
            Min=Arr[i];
        }
    }

    getch();

    printf("\n\nMaximum Array Element is :%d",Min);

    getch();
    return 0;
}

>>>>>>> 4196d8b (C_Programming)
