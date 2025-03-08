///Create, Accept, Display array using loop -Search given element in that array and return its Location if found.

#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, Arr[7]={}, Srch = 0;

    for(i = 0; i < 7; i++)
    {
        printf("Enter value of %d Element:",i+1);
        scanf("%d",&Arr[i]);
    }

    getch();
    printf("\n\n");


    for(i = 0; i < 7; i++)
    {
        printf("value of Element %d is:%d\n",i+1,Arr[i]);

    }

    printf("\n\nEnter Number For Search its Location:");
    scanf("%d",&Srch);

    for(i = 0; i < 7; i++)
    {
        if (Srch == Arr[i])
        {
            break;
        }
    }

    if (i < 7)
    {
        printf("Given Element %d Found on Location %d", Srch, i+1);
    }
    else
    {
        printf("Element %d not found Enter anther Element...", Srch);

    }

    getch();
    return 0;

}


