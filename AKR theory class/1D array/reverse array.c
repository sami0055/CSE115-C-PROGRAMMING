main()
{
    int i;
    int NSU_ID[10];
    for(i=0; i<10; i++)
    {

        scanf("%d",&NSU_ID[i]);
    }
    printf("ID:");
    for(i=0; i<10; i++)
    {
        printf("%d ",NSU_ID[i]);
    }

    printf("\nReverse ID: ");

    for(i=9; i>=0; i--)
    {
        printf("%d ",NSU_ID[i]);
    }

    return 0;
}
