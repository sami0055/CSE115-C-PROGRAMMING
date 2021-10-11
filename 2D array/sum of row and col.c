#include<stdio.h>
int main()
{
    int row,col,i,j;
    printf("Enter the size of row and col: \n");
    scanf("%d%d",&row,&col);
   int A[row][col],sum=0;

   for(i=0; i<row; i++)
   {
       for(j=0; j<col; j++)
       {
           printf("A[%d][%d]= ",i,j);
           scanf("%d",&A[i][j]);
       }
   }
   printf("Sum of row is: ");
   for(i=0; i<row; i++)
   {
       for(j=0; j<col; j++)
       {
           sum=sum+A[i][j];
       }
       printf("%d ",sum);
       sum=0;
   }
   printf("\n sum of col is : ");
   for(j=0; j<col; j++)
   {
       for(i=0; i<row; i++)
       {
           sum=sum+A[i][j];
       }
       printf("%d ",sum);
       sum=0;
   }
}
