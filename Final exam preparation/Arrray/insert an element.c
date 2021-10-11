#include<stdio.h>
int main()
{
    int N,i,pos,num;
    printf("Enter the size of array: ");
    scanf("%d",&N);
    int a[N];
    printf("Enter all the elements: ");
    for(i=0; i<N; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter position to insert num: ");
    scanf("%d",&pos);
    printf("Enter num to insert: ");
    scanf("%d",&num);
    if(pos>N+1|| pos<=0)
        printf("INValid");
    else
    {
        for(i=N; i>=pos; i--)
        {
            a[i]=a[i-1];
        }
        a[pos-1]=num;
        N++;
        printf("After insertion: ");
        for(i=0; i<N; i++)
        {
            printf("%d ",a[i]);
        }
    }
}
