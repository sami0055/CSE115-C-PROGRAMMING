main()
{
    int i,n;
    float sum=0,avg;
    printf("How many numbers: ");
    scanf("%d",&n);
    float m[n];

    for(i=0; i<n; i++)
    {
        printf("m[%d]",i);
        scanf("%f",&m[i]);


    }

    for(i=0; i<n; i++)
    {
        sum=sum+m[i];
    }

    avg=sum/n;
     printf("Sum is %.2f\n",sum);
    printf("Avg is %.2f",avg);
}
