#include<stdio.h>
int main()
{
    int i,j,len,c,count=0,t;
    char a[100];

    fgets(a,sizeof a,stdin);
    len=strlen(a);
    printf("Enter which chatacter u want to remove: ");
    scanf("%c",&c);
    for(i=0; i<len; i++)
    {
      if(a[i]==c)
       {
           count++;
            t=i;
       }

       }
      for(i=t; i<len; i++)
      {
          if(count>1)
       {
           while(i<len-1)
          {
              a[i]=a[i+1];
              i++;
          }
       }
      }
    for(i=0; i<len; i++)
    printf("%c",a[i]);

}
