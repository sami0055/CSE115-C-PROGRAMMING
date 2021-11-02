#include<stdio.h>
int main()
{
    char a[100];
    int fr[100];
    int i=0,max,ascii;
    gets(a);
    int len=strlen(a);
    for(i=0; i<len; i++)
    {
        fr[i]=0;
    }
    i=0;
    while(a[i]!='\0')
    {
        ascii=(int)a[i];
        fr[ascii]+=1;

        printf("%d\n",ascii);
        printf("   %d",fr[i]);
        i++;
    }

}
