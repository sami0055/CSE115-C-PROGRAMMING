evenorodd(int n)
{
    if(n%2==0)
        printf("Even");
    else
        printf("Odd");

}

main()
{
    int x;
    printf("Enter the value of x: ");
    scanf("%d",&x);

    evenorodd(x);

}
