#include<stdio.h>
int main()
{
    int row,col,i,j,k,sum,brow,bcol;
    printf("Enter the row and col of matrix a:\n");
    scanf("%d%d",&row,&col);
    int a[row][col];
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the row and col of matrix b: \n");
    scanf("%d%d",&brow,&bcol);
    int b[brow][bcol];
    int pro[row][bcol];
    if(col!=brow)
    {
        printf("Sorry we can't multiply the matrix a and b\n");
    }
    else
    {
        printf("Enter the elements of matrix b: \n");
        for(i=0; i<brow; i++)
        {
            for(j=0; j<bcol; j++)
            {
                printf("b[%d][%d]= ",i,j);
                scanf("%d",&b[i][j]);
            }
        }

    }
    printf("\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<bcol; j++)
        {
            for(k=0; k<brow; k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            pro[i][j]=sum;
            sum=0;
        }
    }
   //printing result marrix
   printf("Result matrix\n");
   for(i=0; i<row; i++)
   {
       for(j=0; j<bcol; j++)
       {
           printf("%d ",pro[i][j]);
       }
       printf("\n");
   }

}
