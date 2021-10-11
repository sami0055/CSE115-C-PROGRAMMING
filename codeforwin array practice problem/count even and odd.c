#include<stdio.h>
int main()
{
    int a[100],i,n,odd=0,even=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
            even++;
        if(a[i]%2!=0)
            odd++;
    }

    printf("Even no %d\n",even);
    printf("Odd no %d",odd);
}
