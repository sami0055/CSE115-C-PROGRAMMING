#include<stdio.h>
int main()
{
    int i,n,*p,*q,temp;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int a[n];
    p=a;
    for(i=0; i<n; i++)
    {
        scanf("%d",(p+i));
    }
    q=&a[n-1];
    printf("Before reverse array:");
    print(a,n);
    printf("\n");
    while(p<=q)
    {
        temp=*p;
        *p=*q;
        *q=temp;
        p++;
        q--;
    }
    printf("After reverse ");
    print(a,n);


}
void print(int *arr,int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d ",*(arr+i));
    }
}
