#include<stdio.h>
int main()
{
    char a[100],ch;

    int len,i,j;
    gets(a);
    len=strlen(a);

   for(i=0; i<len-1; i++)
   for(j=0; j<len; j++)
    if(a[j]>a[i+1])
   {
       ch=a[j];
       a[j]=a[i+1];
       a[i+1]=ch;
   }
   printf("%s",a);
}
