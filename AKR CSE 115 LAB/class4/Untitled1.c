
main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n<0)
    {
         n=n*(-1);
        printf("Absolute value %d",n);
    }

    else if(n>0)
        printf("Absolute value %d",n);
}
