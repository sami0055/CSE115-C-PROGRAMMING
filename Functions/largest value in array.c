#include<stdio.h>
int largestvalue(int num[],int n);
int main()
{
    int i,n,result;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }
 result=largestvalue(a,n);



    printf("max is %d ",result);
}
int largestvalue(int num[],int n)
{
    int max,i;
    max=num[0];
     for(i=1; i<n; i++)
     {
         if(num[i]>max)
            max=num[i];

     }

    return max;
}
