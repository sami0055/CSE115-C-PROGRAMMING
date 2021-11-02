#include<stdio.h>
int main()
{
    int i,n,pos,num;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a[n];

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter position for insert a elements");
    scanf("%d",&pos);
    printf("Enter a number for insert");
    scanf("%d",&num);
    if(pos>n+1||pos<0)
    {
        printf("Invalid position");
    }
    else
    {
        for(i=n; i<=pos; i++)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=num;
    n++;
    printf("Insert number\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }


    }


}
