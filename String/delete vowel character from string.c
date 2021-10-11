#include<stdio.h>
int main()
{
    char a[100],t[100];
    int i,len;
    fgets(a,sizeof a,stdin);
    len=strlen(a);

    for(i=0; i<len; i++)
    {

        if(a[i]!='a'&& a[i]!='e'&&a[i]!='i'&& a[i]!='o'&&a[i]!='u'&&a[i]!='A'&& a[i]!='E'&&a[i]!='I'&& a[i]!='O'&&a[i]!='U')
        {
             printf("%c",a[i]);
        }
    }

}
