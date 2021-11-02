#include<stdio.h>
int main()
{
    int i=0,j=0,len,max=0,x;
    char a[100];
    gets(a);
    len=strlen(a);
    for(j=max; j<len; j++){
          for(i=0; i<len; i++)
    {
        if(a[i]!=' ')
        {
            j++;

        }
        if(max>j)
        max=j;
    }

    }
     for(i=0; i<max; i++)
    {
          printf("%c",a[i]);
    }

}
