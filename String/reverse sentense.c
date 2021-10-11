#include<stdio.h>
int main()
{
    int i,j=0,len,k;
    char a[100],b[100];
    fgets(a,sizeof a,stdin);
    len=strlen(a);

    for(i=len-1; i>=0; i--)
    {
        b[j]=a[i];
        j++;
    }
    b[j]='\0';
  for(i=0; i<len; i++)
  {
       if(b[i+1]==' '|| b[i+1]==NULL)
    {
      for(j=i; j>=0 && b[j]!=' '; j--)
        printf("%c",b[j]);
        printf(" ");

    }
  }

}
