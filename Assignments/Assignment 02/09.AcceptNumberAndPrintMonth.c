///Write a program that accepts a month number (1 to 12) and prints the corresponding month name.


int main()
{
    int Num = 0;
    printf("Enter A Number To Find the Corresponding Month : ");
    scanf("%d",&Num);

    if(Num == 1)
    {
        printf("\n\nThe Day Of Week is : January");
    }
    else if(Num == 2)
    {
        printf("\n\nThe Day Of Week is : February");
    }
    else if(Num == 3)
    {
        printf("\n\nThe Day Of Week is : March");
    }
    else if(Num == 4)
    {
        printf("\n\nThe Day Of Week is : April");
    }
    else if(Num == 5)
    {
        printf("\n\nThe Day Of Week is : May");
    }
    else if(Num == 6)
    {
        printf("\n\nThe Day Of Week is : Jun");
    }
    else if(Num == 7)
    {
        printf("\n\nThe Day Of Week is : July");
    }
    else if(Num == 8)
    {
        printf("\n\nThe Day Of Week is : August");
    }
    else if(Num == 9)
    {
        printf("\n\nThe Day Of Week is : September");
    }
    else if(Num == 10)
    {
        printf("\n\nThe Day Of Week is : October");
    }
    else if(Num == 11)
    {
        printf("\n\nThe Day Of Week is : November");
    }
    else if(Num == 12)
    {
        printf("\n\nThe Day Of Week is : December");
    }
    else
    {
        printf("\n\nEnter the Number In Range 1 to 12");
    }

    getch();
    return 0;
}
