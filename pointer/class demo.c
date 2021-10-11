#include<stdio.h>
int main()
{
    int a[5]={3,8,2,7,6};
    int *p;
    p=a;
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",p+3);
    printf("%d\n",*(p+3));
    printf("%d",*p+3);
}

