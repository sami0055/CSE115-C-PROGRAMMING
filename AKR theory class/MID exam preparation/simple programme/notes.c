main()
{
    int x=50,y=20,z=5,n=1,amount,i,k,j,b,total;
    printf("Enter amount");
    scanf("%d",&amount);
    i=amount/50;
    k=amount-i*50;
    k=k/20;
    j=amount-i*50-k*20;
    j=j/5;
    b=amount-i*50-k*20-j*5;
    total=i+k+j+b;
    printf("Total number of notes: %d\n",total);

    printf("50: %d\n",i);
    printf("20: %d\n",k);
    printf("5: %d\n",j);
    printf("1: %d",b);
}
