
#include<stdio.h>
void removeFromArray(int A[],int N,int V);
void removeFromArray(int A[],int N,int V)
{
    int r=0,i;
    for(i=0; i<N; i++)
    {
        if(A[i]==V)
        {
         int t=i;
         for(int x=t; x<N-1; x++)
         {
             A[x]=A[x+1];
         }
         A[N-1]=r;break;
        }
    }
    printf("The modified array is :");
    for(i=0; i<N; i++)
    {
        printf("%d ",A[i]);
    }

}
int main()
{
    int i,N,V;
    printf("Enter the size of array: ");
    scanf("%d",&N);
    int A[N];
    printf("Enter the elements of array: \n");
    for(i=0; i<N; i++)
    {
        printf("A[%d]=",i);
        scanf("%d",&A[i]);
    }
    printf("Enter a value for search: ");
    scanf("%d",&V);
    removeFromArray(A,N,V);

}
