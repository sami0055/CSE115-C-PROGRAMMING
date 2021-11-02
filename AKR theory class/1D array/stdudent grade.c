main()
{
    int i,n,m;
    printf("Enter how many students: ");
    scanf("%d",&n);
    int a[n];
    char r[n],g;

   for(i=0; i<n; i++)
   {
       printf("Enter marks: ");
       scanf("%d",&a[i]);
   }

   for(i=0; i<n; i++)
   {
       m=a[i];
       if(m>=90) g='A';
       else if(m>=80)
       g='B';
       else if(m>=70)
        g='C';
       else if(m>=60)
        g='D';
       else
        g='F';

       r[i]=g;
   }

   for(i=0; i<n; i++)
   {
       printf("Marks: %d and Grade: %c \n",a[i],r[i]);
   }
}
