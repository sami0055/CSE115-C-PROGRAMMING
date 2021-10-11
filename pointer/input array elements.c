#include<stdio.h>
int main()
{
    int n,i,*p;
    int a[100];
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    p=a;
    for(i=0; i<n; i++)
    {
        scanf("%d",p+i);

    }
    for(i=0; i<n; i++)
    {
        printf("%d ",*(p+i));

    }

}
