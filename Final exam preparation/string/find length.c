#include<stdio.h>
int main()
{
    char a[100];
    printf("Enter string");
    gets(a);
    int i,count=0;
    for(i=0; a[i]!='\0'; i++)
    {
        count++;
    }
    printf("Length of string is %d ",count);
}
