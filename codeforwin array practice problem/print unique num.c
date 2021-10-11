#include<stdio.h>
int main()
{
    int a[100],f[100],i,j,count,n;
    printf("Enter the size of a: ");
    scanf("%d",&n);

    printf("Enter the elements of all array: ");
    for(i=0; i<n; i++)
    {
       printf("a[%d]",i);
        scanf("%d",&a[i]);


    }

    for(i=0; i<n; i++)
    {
        count=1;
        for(j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                count++;
                f[j]=0;
            }
        }

        if(f[i]!=0)
        {
            f[i]=count;
        }
    }

    printf("Unique elements in the array are : ");
    for(i=0; i<n; i++)
    {
        if(f[i]==1)
        {
            printf("%d",a[i]);
        }
    }
}
