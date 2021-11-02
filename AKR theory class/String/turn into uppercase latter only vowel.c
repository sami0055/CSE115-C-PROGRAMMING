#include<stdio.h>
int main()
{
    char a[100],p;
    fgets(a,sizeof a,stdin);
    int len=strlen(a);
    int i;

    for(i=0; i<len; i++)
    {
        a[i]=tolower(a[i]);
        if(a[i]=='a'|| a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            a[i]=toupper(a[i]);
        }
        printf("%c",a[i]);
    }

}
