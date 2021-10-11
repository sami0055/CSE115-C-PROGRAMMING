#include<stdio.h>
void minMax(int a[],int len,int *min,int *max)
{
    *min=*max=a[0];
    int i;
    for(i=1; i<len; i++)
    {
        if(a[i]>*max)
            *max=a[i];
        if(a[i]<*min)
            *min=a[i];
    }

}
int main()
{
    int i,n,min,max;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    //int len=sizeof(a)/sizeof(a[0]);
    minMax(a,n,&min,&max);
    printf("Min is %d and max is %d ",min,max);
}
