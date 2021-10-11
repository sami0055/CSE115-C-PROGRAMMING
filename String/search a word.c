
#include<stdio.h>
int main()
{
    char a[80],t[80];
    int i,p,len,j;
    printf("Enter a sentence: ");
    gets(a);
    len=strlen(a);
    printf("Which word?");
    gets(t);
    int len1=strlen(t);
    p=-1;
    for(i=0; i<len; i++)
    {
        if(a[i]==t[0])
        {
            for(j=1; j<len1; j++)
            {
                if(a[i+j]!=t[j])
                {
                    break;
                }
            }
            if(j==len1)
            {
                p=i;
                break;
            }
        }
    }
    if(p==-1)
        printf("Sorry not found");
    else
        printf("Found at position %d ",p);
}

