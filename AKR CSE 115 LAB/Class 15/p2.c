#include<stdio.h>
#include<string.h>
int sameOrnot(char *x,char *y)
{
    while(*x==*y)
    {
    if(*x=='\0' || *y=='\0')
        break;
    x++;
    y++;
}
if(*x=='\0' && *y=='\0')
{
    return 0;
}
else
return -1;

}
int main()
{
    char a[100],b[100],r;
    gets(a);
    gets(b);
    r=sameOrnot(a,b);
    if(r==0)
        printf("Given strings are same");
    else if(r==-1)
        printf("Given strings are not same");

}
