#include<stdio.h>
int main()
{
    int n,i,sum;
     printf("Enter the size of array: ");
     scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    sum=sumofarray(a,0,n);
    printf("SUm is %d ",sum);
}
int sumofarray(int a[],int start,int len)
{
    if(start>=len)
        return 0;
    return (a[start]+sumofarray(a,start+1,len));

}
