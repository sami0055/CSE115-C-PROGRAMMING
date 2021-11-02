#include<stdio.h>
int main()
{
    char a[100],b[100];
    int len1,len2,i,v1=0,v2=0,c1=0,c2=0,w1=1,w2=1;
    gets(a);
    gets(b);
    len1=strlen(a);
    len2=strlen(b);
    for(i=0; i<len1; i++)
    {
        if(a[i]=='A'|| a[i]=='E'||a[i]=='I'||a[i]=='O'|| a[i]=='U')
            v1++;
        else if(a[i]==' ')
            w1++;
        else
        c1++;
    }
    for(i=0; i<len2; i++)
    {
        if(b[i]=='A'|| b[i]=='E'|| b[i]=='I'||b[i]=='O'||b[i]=='U')
            v2++;
        else if(b[i]==' ')
            w2++;
        else
            c2++;
    }
    if(v1==v2 && c1==c2 && w1==w2)
        printf("YES");
    else
    printf("NO");
}
