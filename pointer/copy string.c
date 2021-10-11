#include<stdio.h>
int main()
{
    char a[100],b[100];
    char *p=a;
    char *q=b;
    printf("Enter any string:\n");
    gets(a);
    while(*p!='\0')
    {
        *q=*p;
        q++;
        p++;
    }
    printf("%s",b);
}
