#include<stdio.h>
int samestring(char a[],char b[])
{
    int i,c=0,len1,len2;
    len1=strlen(a);
    len2=strlen(b);
    if(len1!=len2)
        return 0;
    for(i=0; i<len1; i++)
    {
        if(a[i]==b[i])
            c++;
    }
    if(c==len1)
        return 1;
    else
        return 0;
}
int main()
{
    char a[100],b[100];
    gets(a);
    gets(b);
int r=samestring(a,b);
    if(r==1)
        printf("String are same");
    else
        printf("String are not same");

}
