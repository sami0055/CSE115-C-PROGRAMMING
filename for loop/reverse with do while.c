main()
{
    int n,a;
    printf("Enter N: ");
    scanf("%d",&n);

    do{

        a=n%10;
        printf("%d",a);
        n=n/10;

    } while(n!=0);
}
