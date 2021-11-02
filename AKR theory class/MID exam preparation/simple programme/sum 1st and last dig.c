main()
{
    int n,first,last,sum;
    printf("Enter a 5 digit number");
    scanf("%d",&n);

    first=n/10000;
    last=n%10;
    sum=first+last;
    printf("Sum is %d",sum);
}
