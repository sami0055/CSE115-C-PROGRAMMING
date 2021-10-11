#include<stdio.h>
int main()
{
    char a[25][50],temp[100];
    int i,n,j;
   printf("Input number of strings :");
  scanf("%d",&n);

printf("Input string %d :\n",n);
  for(i=0;i<=n;i++)
  {
       fgets(a[i], sizeof a, stdin);
  }

  //Bubble sort

  for(i=0; i<=n-1; i++)
    for(j=i+1; j<=n; j++)
  {
      if(strcmpi(a[i],a[j])>0)
      {
          strcpy(temp,a[i]);
          strcpy(a[i],a[j]);
          strcpy(a[j],temp);
      }

  }
  for(i=0; i<=n; i++)
  printf("%s\n",a[i]);

}
