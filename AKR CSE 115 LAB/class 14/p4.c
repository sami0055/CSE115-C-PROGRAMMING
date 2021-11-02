#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the size of matrix N: ");
    scanf("%d",&n);
    int a[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i+j==n-1)
            {
                printf("1");
            }
            else
                printf("0");
        }
        printf("\n");
    }
}
