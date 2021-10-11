#include<stdio.h>
int sumOfnaturalnumbers(int start,int end);
int main()
{
    int start,end,sum;
    printf("Enter start number: ");
    scanf("%d",&start);
    printf("Enter second number: ");
    scanf("%d",&end);
    sum=sumOfnaturalnumbers(start,end);
    printf("sum is %d ",sum);
}
int sumOfnaturalnumbers(int start,int end)
{
    if(start==end)
        return start;
    else
        return start+sumOfnaturalnumbers(start+1,end);
}
