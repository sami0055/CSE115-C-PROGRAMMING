main()
{
    int a[5],x=0,t=0,i;

    float avg,sum=0;
    printf("Enter array elements: ");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<5; i++)
    {
        sum=sum+a[i];
    }
    avg=sum/5;
    for(i=0; i<5; i++)
    {
         if(a[i]>avg)
        x++;
    else
        t++;
    }
   printf("Average is %.2f\n",avg);
    printf("%d of them got above average\n",x);
    printf("%d of them got below average ",t);

}
