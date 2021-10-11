#include<stdio.h>
int main()
{
    char a[100];
    int len,i;
    gets(a);
    len=strlen(a);
    for(i=0; i<len; i++)
    {
        if(a[i]>='a'&& a[i]<='z')
            a[i]=a[i]-32;
        else if(a[i]>='A'&& a[i]<='Z')
            a[i]=a[i]+32;
        else
            a[i]=a[i];
    }
    printf("%s",a);
}
