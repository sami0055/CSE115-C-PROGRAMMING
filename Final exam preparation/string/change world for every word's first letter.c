#include<stdio.h>
int main()
{
    char a[100];
    printf("Enter a string: ");
    gets(a);
    int i,len;
    len=strlen(a);
    for(i=0; i<len; i++)
    {
        if(i==0)
        a[i]=a[i]+1;

        if(a[i]==' ')
        {
            ++i;
            a[i]=a[i]+1;
        }
    }
    printf("%s",a);
}
