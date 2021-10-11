#include<stdio.h>
int main()
{
    char a[100],b[100];
    int r;
    gets(a);
    gets(b);
     r=sameornot(a,b);
    if(r==0)
        printf("Given string are same ");
    else if(r==-1)
        printf("Given string are not same ");
}
int sameornot(char *x,char *y)
{
    while(*x==*y)
    {
        if(*x=='\0'|| *y=='\0')
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
