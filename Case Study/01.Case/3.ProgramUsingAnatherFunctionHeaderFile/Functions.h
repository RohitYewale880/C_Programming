void Addition()
{
    int N1 = 0, N2 = 0, Sum = 0;
    printf("\nEnter First Number : ");
    scanf("%d",&N1);
    printf("\nEnter Second Number : ");
    scanf("%d",&N2);

    Sum = N1 + N2;
    printf("\n\nAddition of %d And %d => %d",N1,N2,Sum);
    printf("\n\n======================================================\n\n");
    return;
}

void Subtraction()
{
    int N1 = 0, N2 = 0, sub = 0;
    printf("\nEnter First Number : ");
    scanf("%d",&N1);
    printf("\nEnter Second Number : ");
    scanf("%d",&N2);

    sub = N1 - N2;
    printf("\n\nSubtraction of %d And %d => %d",N1,N2,sub);
    printf("\n\n======================================================\n\n");

    return;
}

void Multiply()
{
    int N1 = 0, N2 = 0, mul = 0;
    printf("\nEnter First Number : ");
    scanf("%d",&N1);
    printf("\nEnter Second Number : ");
    scanf("%d",&N2);

    mul = N1 * N2;
    printf("\n\nMultiplication of %d And %d => %d",N1,N2,mul);
    printf("\n\n======================================================\n\n");
    return;
}

void Division()
{
    int N1 = 0, N2 = 0, div = 0;
    printf("\nEnter First Number : ");
    scanf("%d",&N1);
    printf("\nEnter Second Number : ");
    scanf("%d",&N2);

    div = N1 / N2;
    printf("\n\nDivision of %d And %d => %d",N1,N2,div);
    printf("\n\n======================================================\n\n");
    return;
}

void Remainder()
{
    int N1 = 0, N2 = 0, rem = 0;
    printf("\nEnter First Number : ");
    scanf("%d",&N1);
    printf("\nEnter Second Number : ");
    scanf("%d",&N2);

    rem = N1 % N2;
    printf("\n\Remainder => %d",N1,N2,rem);
    printf("\n\n======================================================\n\n");
    return;
}
