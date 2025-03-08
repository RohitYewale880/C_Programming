///else if Ladder - Day Number to Day

#include<stdio.h>
#include<conio.h>

int main()

{
    int Day = 0;
    printf("Enter the Day Number : ");
    scanf("%d",&Day);

    if (Day == 1)
    {
        printf("Its Monday\n\n");
    }
    else if (Day == 2)
    {
        printf("Its Tuesday\n\n");
    }
    else if (Day == 3)
    {
        printf("Its Wednesday\n\n");
    }
    else if (Day == 4)
    {
        printf("Its Thursday\n\n");
    }
    else if (Day == 5)
    {
        printf("Its Friday\n\n");
    }
    else if (Day == 6)
    {
        printf("Its Saturday\n\n");
    }
    else if (Day == 7)
    {
        printf("Its Sunday\n\n");
    }
    else
    {
        printf("Invalid Day.\n\n");
    }
    getch();
    return 0;
}
