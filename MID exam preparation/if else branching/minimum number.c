main()
{
    int n,n1,n2,n3;
    printf("Enter a three digit number: ");
    scanf("%d",&n);

    n1=n%10;
    n=n/10;
    n2=n%10;
    n=n/10;
    n3=n%10;

    if(n1<n2 && n1<n3)
        printf("Minimum is %d",n1);
    else if(n2<n1 && n2<n3)
        printf("Minimum is %d",n2);
    else
        printf("Minimum is %d",n3);

}
