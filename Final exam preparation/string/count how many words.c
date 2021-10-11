#include<stdio.h>
int main()
{
     char a[100];
    char pc;
    int i,word=1,len;
    printf("Enter string: ");
    gets(a);
    len=strlen(a);
    pc='\0';
    for(i=0; i<len; i++)
    {
        if(a[i]==' '|| a[i]=='\n'|| a[i]=='\t'|| a[i]=='\0')
        {
            if(pc!=' '&& pc!='\n' && pc!='\t' && pc!='\0')
                word++;
        }
        pc=a[i];

    }
    printf("Total number of word %d ",word);
}
