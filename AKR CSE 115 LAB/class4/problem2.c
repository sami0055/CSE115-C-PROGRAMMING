main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);

    if(n%5==0 && n%7!=0)
        printf("Yes");
    else
    printf("NO");
}
