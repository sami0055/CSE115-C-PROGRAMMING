#include<stdio.h>
int main()
{
    int i,j,len1,len2,count;
    char a[100],b[100];
    gets(a);
    gets(b);
    len1=strlen(a);
    len2=strlen(b);
    for(i=0; i<len1; i++)
    {
        for(j=0; j<len2; j++)
        {
           if(a[i]==b[j])
           {
               count++;
               break;
           }

        }
        if(a[i]==b[j])
            break;
    }
    if(count==1)
        printf("First matched letter %c ",a[i]);
}
