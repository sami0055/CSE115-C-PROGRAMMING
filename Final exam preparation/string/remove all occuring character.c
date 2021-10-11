#include<stdio.h>
int main()
{
    char a[100];
    char ch;
    printf("Enter any string: ");
    gets(a);
    printf("Enter character to remove from string: ");
    ch=getchar();
    toremove(a,ch);
    printf("%s",a);

}
void toremove(char s[],char ch)
{
    int i,j,len;
    len=strlen(s);
    for(i=0; i<len; i++)
    {
        if(s[i]==ch)
        {
            for(j=i; j<len; j++)
            {
                s[j]=s[j+i];
            }
            len--;
            i--;
        }
    }

}
