int main()
{
    int i,n;
    printf("How many students?");
    scanf("%d",&n);
    float a[n],m;
    char G[n];

    for(i=0; i<n; i++)
    {
        printf("Enter marks");
        scanf("%f",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        m=a[i];
        if(m>=90)
            G[i]='A';
        else if(m>=80)
            G[i]='B';
        else if(m>=70)
            G[i]='C';
        else if(m>=60)
        G[i]='D';
        else
        G[i]='F';

   }
   for(i=0; i<n; i++)
   {
      printf("Marks is %f Grade is %c \n",a[i],G[i]);
   }



}
