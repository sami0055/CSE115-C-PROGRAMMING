#include<stdio.h>
int main()
{
    char a[100];
    int i,len,dig=0,sp=0,alp=0;
    gets(a);
    len=strlen(a);
    for(i=0; i<len; i++)
    {
        if(a[i]>='A' && a[i]<='Z'|| a[i]>='a'&& a[i]<='z')
            alp++;
        else if(a[i]>='0' && a[i]<='9')
            dig++;
        else
            sp++;
    }
    printf("Digit = %d, Alphabet= %d , Special character= %d ",dig,alp,sp);
}
