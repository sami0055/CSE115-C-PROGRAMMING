#include<stdio.h>
int main()
{
    char a[100];
    gets(a);
    int len,i;
    len=strlen(a);
    for(i=0; i<len; i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
            a[i]='*';

    }
    printf("%s",a);
}
