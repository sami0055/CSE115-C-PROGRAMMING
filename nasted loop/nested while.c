main()
{
    int count1=1,c=0;
    while(count1<=10)
    {
        int count2=1;
        while(count2<=20)
        {
            printf("Here\n");
            count2++;
            c++;
        }
        count1++;
    }
   printf("%d times print here",c);
}
