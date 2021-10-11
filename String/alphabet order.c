#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
  {
     char str[10],temp;
     int i,j;

    gets(str);
    int len=strlen(str);
     for(i=0;i<len-1;i++)
       for(j=i+1;j<len;j++)
         if(str[i]>str[j])
         {
           temp = str[i];
           str[i] = str[j];
           str[j] = temp;
         }
     printf("\nReversed String is : [ %s ]\n",str);

     return 0;
  }

