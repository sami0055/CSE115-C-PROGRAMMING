#include<stdio.h>
int main()
{
    int a[]={10,11,23,34,56,77};
    int *p=&a[2];
    printf("%d ",*p++);
    printf("%d",*p);


}
