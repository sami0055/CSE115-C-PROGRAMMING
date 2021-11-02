#include<stdio.h>
int main()
{
    int N,i,j;
    printf("Enter the size of array: ");
    scanf("%d",&N);
    int a[N][N];
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    int identity=1;
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            if(i==j && a[i][j]!=1)
                identity=0;
            else if(i!=j && a[i][j]!=0)
                identity=0;
        }
    }
    if(identity==1)
    {
        printf("Given matrix is identity matrix: \n");
        for(i=0; i<N; i++)
        {
            for(j=0; j<N; j++)
            {
                printf("%d",a[i][j]);

            }
            printf("\n");
        }
    }
    else
        printf("Given matrix is not identity matrix: \n");

}
