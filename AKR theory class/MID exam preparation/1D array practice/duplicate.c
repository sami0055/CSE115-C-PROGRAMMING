#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a[n],dup[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        dup[i]=-1;
    }
    for(i=0; i<n; i++)
    {
        int c=1;
        for(j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                c++;
                dup[j]=0;
            }
        }
        if(dup[i]!=0)
        {
            dup[i]=c;
        }
    }

    printf("Duplicate elements are\n");
    for(i=0; i<n; i++)
    {
        if(dup[i]>1)
        {
            printf("%d %d times \n",a[i],dup[i]);
        }
    }
}
