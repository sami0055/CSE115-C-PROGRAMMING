#include<Windows.h>
int main()
{
    int i,j,n;
    printf("Enter the value of n; ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
            sleep(1);
        }
        printf("\n");
    }
}
