int main()
{
    int i,j,n;
    printf("Enter the value of N: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j%2==0)
            {
                printf("%d",1);
            }
            else
                printf("%d",0);
        }
        printf("\n");
    }
}
