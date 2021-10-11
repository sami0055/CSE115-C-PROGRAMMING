#include<stdio.h>
int main()
{
    char a[100],b[100];
    gets(a);
    gets(b);
    int r=sameornot(a,b);
    if(r==0)
        printf("String are same ");
    else
        printf("String are not same");


}
int sameornot(char* x,char* y)
{
    while(*x==*y)
    {
        if(*x=='\0'|| *y=='\0')
        break;
        x++;
        y++;
    }
    if(*x=='\0'&&*y=='\0')
    {
        return 0;
    }
    else
        return -1;

}
