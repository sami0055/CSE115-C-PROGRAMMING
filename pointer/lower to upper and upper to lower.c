#include<stdio.h>
int main()
{
    char a[100],*p;
    gets(a);
    p=a;
    int i,len;
    len=strlen(a);
    for(i=0; i<len; i++)
    {
        if(*p>='A' && *p<='Z')
        {
            *p=tolower(*p);
        }
        else if(*p>='a'&& *p<='z')
            *p=toupper(*p);
        p++;
    }
    printf("%s",a);

}
