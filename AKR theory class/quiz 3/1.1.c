#include<stdio.h>
int main()
{
    int i,len1,len2,w1=1,w2=1,c1=0,c2=0,v1=0,v2=0;
    char a[100],b[100];
    gets(a);
    gets(b);
    len1=strlen(a);
    len2=strlen(b);
    for(i=0; i<len1; i++)
    {
        if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')

           {
               v1++;
           }
        else if(a[i]==' ')
        {
             w1++;
        }

        else
            c1++;
    }
     for(i=0; i<len1; i++)
    {
        if(b[i]=='A'||b[i]=='E'||b[i]=='I'||b[i]=='O'||b[i]=='U')
            v2++;
        else if(b[i]==' ')
            w2++;
        else
            c2++;
    }
    if(w1==w2 && c1==c2 && v1==v2)
        printf("YES");
    else
        printf("NO");
}
