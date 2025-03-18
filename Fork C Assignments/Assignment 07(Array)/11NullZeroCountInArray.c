///Create accept display array using loop  find count of Null[0] Element in Array

#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[7]={}, i = 0, cnt = 0;

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

        if (Arr[i] == 0)
        {
            cnt++;
        }
    }
    getch();

    printf("\n\nZero count in the Array is :%d",cnt);

    getch();
    return 0;
}
