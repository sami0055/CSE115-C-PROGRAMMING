#include<stdio.h>
int main()
{
    int v=0,c=0;
    char a[100];
    char *p;
    gets(a);
    p=a;

    while(*p!='\0')
    {
        if(*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U'||
           *p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u')
            v++;
        else
            c++;


            p++;
    }
    printf("%d vowel and %d consonant",v,c);
}
