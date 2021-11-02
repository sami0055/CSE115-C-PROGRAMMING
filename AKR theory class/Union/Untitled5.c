#include<stdio.h>
int main()
{
    int n,i,j,count=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];

    for(i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }

    }
    for(i=0; i<n; i++)
    {
        if(max%a[i]==0)
            count++;
    }
    if(count==n)
    {
        printf("Good maximum");
    }
    else
        printf("Bad maximum");

}
