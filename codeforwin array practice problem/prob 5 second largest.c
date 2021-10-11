#include<stdio.h>
int main()
{
    int a[100],i,max,second_max,n;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);


    }

    max=a[0];
    second_max=a[0];

    for(i=1; i<n; i++)
    {
        if(a[i]>max)
        {   second_max=max;
               max=a[i];

        }
        else if(a[i]>second_max && a[i]<max )
            second_max=a[i];

    }

    printf("max is %d\n",max);
    printf("Second max is %d",second_max);

}
