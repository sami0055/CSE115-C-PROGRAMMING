#include<stdio.h>
int main()
{
    int a[100],i,n,neg=0,pos=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);

    }
    for(i=0; i<n; i++)
    {
        if(a[i]>0)
            pos++;

        if(a[i]<0)
            neg++;
    }

    printf("Number of positive elements : %d\n",pos);
    printf("Number of Negative elements : %d",neg);

    }
