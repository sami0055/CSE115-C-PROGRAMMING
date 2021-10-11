#include<stdio.h>
int main()
{
    char a[100];
    int i,ch=0,s1=0,cp=0,d=0,sym=0,len;
    fgets(a,sizeof a,stdin);
    len=strlen(a);

    for(i=0; i<len; i++)
    {
        ch++;
        if(a[i]>='a'&& a[i]<='z')
            s1++;
        else if(a[i]>='A'&& a[i]<='Z')
            cp++;
        else if(a[i]>='0'&& a[i]<='9')
            d++;
        else
            sym++;
    }
    if(ch>=6 && s1>=1&& cp>=1 && (d>=1 || sym>=1))
    {
        printf("VALID PASSWORD");
    }
    else
        printf("NOT A VALID PASSWORD");
}
