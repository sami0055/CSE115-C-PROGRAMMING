#include<stdio.h>
int main()
{
    int N,i,max=0,count=0,j,x;
    printf("Enter the size of array: ");
    scanf("%d",&N);
    int a[N];
    for(i=0; i<N; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<N; i++)
    {
        count=0;
        for(j=0; j<N; j++)
        {
            if(a[i]==a[j])
                ++count;
        }
        if(count>max)
        {
            max=count;
            x=a[i];
        }
    }
    printf("Mod is %d",x);
}
