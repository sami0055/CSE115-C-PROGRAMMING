
#include<stdio.h>
int main()
{
    char s[100];
    int i=0,j=0,x=0,n;
    gets(s);
   n=strlen(s);

     for(i=n-1; i>=0; i--)
     {
         if(s[i]==s[j])
         {
             x++;
         }
         j++;
     }
     if(x==n)
     printf("Palindrome");
     else
        printf("Not palindrome");
}










