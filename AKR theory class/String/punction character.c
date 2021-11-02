#include<stdio.h>
int main()
{
    int i,len,w=1;
    char a[100];

    gets(a);
    len=strlen(a);

    for(i=0; i<len; i++)
    {
        if(a[i]==',')
            w++;
    }
    printf(" Punctuation character exist is in this string: %d",w);
}
