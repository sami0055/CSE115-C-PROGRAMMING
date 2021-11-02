#include<stdio.h>
int main()
{
    int i,n,fr=0,value;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter a value for find frequency: ");
    scanf("%d",&value);
    for(i=0; i<n; i++)
    {
        if(a[i]==value)
        {
            fr++;
        }
    }
    printf("Frequency of %d is %d",value,fr);


}
