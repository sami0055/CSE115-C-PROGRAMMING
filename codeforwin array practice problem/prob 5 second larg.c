#include<stdio.h>
int main()
{
    int a[100],i,n,max,second_max;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    max=second_max=a[0];

    for(i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }

    for(i=1; i<n; i++)
    {
        if(a[i]>max)
        {
            second_max=max;
            max=a[i];
        }
        else if (a[i]>second_max && a[i]<max)
            second_max=a[i];
    }

    printf("Max is %d\n",max);
    printf("Min is %d",second_max);
}
