#include<stdio.h>
int main()
{
 char a[100];
 printf("Enter any string: ");
 gets(a);
 reverse(a);
}
void reverse(char str[])
{
    int i=0,len=0,j;
    char b[100];
    while(str[i]!='\0')
    {
        ++len;
        i++;
    }
    for(i=len-1,j=0; i>=0,j<=len; i--,j++)
    {
        b[j]=str[i];
    }
    printf("%s",b);

}
