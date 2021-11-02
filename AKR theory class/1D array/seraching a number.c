main()
{
    int i,n,value,pos;
    printf("How many numbers??");
    scanf("%d",&n);
    int a[n];
    pos=-1;

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
  printf("Enter the value which u want to search: ");
  scanf("%d",&value);
  for(i=0; i<n; i++)
  {
      if(value==a[i])
      {
          pos=i+1;
      }
  }
  if(pos==-1)
    printf("Not found");
  else
    printf("The position of %d is %d",value,pos);

  return 0;


}
