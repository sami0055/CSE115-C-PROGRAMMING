#include<stdio.h>
int main()
{
    int i,n,flag=0,value,pos;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter a value for search: ");
    scanf("%d",&value);

    for(i=0; i<n; i++)
    {
        if(a[i]==value)
        {
            pos=i;
            flag=1;
            break;
        }

    }
    if(flag==1)
    {
        printf("%d found at %d",value,pos);
    }
}
