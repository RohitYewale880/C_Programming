///Create Array of 7 Element with Null initialization, Accept and Display All element with loop.


#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[7]={};
    int i = 0;

    for(i = 0; i < 7; i++)
    {
        printf("Enter value of %d index:",i);
        scanf("%d",&Arr[i]);
    }

    getch();
    printf("\n\n");


    for(i = 0; i < 7; i++)
    {
        printf("value of %d index is:%d\n",i,Arr[i]);
    }

    getch();
    return 0;

}
