void main()
{
    int i,j,k,n,o;

    printf("Enter n\n");
    scanf("%d",&n);
    if(n>26)
    {
        printf("Enter n up to 26");
        scanf("%d",&n);
    }
    else
    {


    for(i=1;i<=n;i++)
        {

        o=1;
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++,o++)
        {
            printf("%c",(char)(o+64));
        }
        printf("\n");
    }
    }

}
