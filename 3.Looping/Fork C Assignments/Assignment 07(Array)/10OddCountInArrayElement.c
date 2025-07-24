///Create accept display array using loop  find count of even element in the array


#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[7]={}, i = 0, cnt = 0;

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

        if (Arr[i] % 2 == 1)
        {
            cnt++;
        }
    }
    getch();

    printf("\n\nOdd count in the Array is :%d",cnt);

    getch();
    return 0;

}

