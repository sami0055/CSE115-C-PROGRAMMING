#include<stdio.h>
int main()
{
    int i,j,col,row,x,y,u;
    printf("Enter the col and row of the array: ");
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
  printf("Left diagonal is : \n");
  for(i=0; i<row; i++)
  {
      for(j=0; j<col; j++)
      {
          if(i==j)
            printf("%d ",a[i][j]);
      }
  }
  printf("\nRight diagonal\n");
  for(i=0; i<row; i++)
  {
      for(j=0; j<col; j++)
      {
          if(i+j==row-1)
            printf("%d ",a[i][j]);
      }
  }
  int c=0;
  for(i=0,j=0; i<row,i<col; i++,j++)
  {
         if(i==j)
           x==i;
          u=i+j;
          if(u==row-1)
          {
              u=row-1;
          }
          if(a[x]==a[u])
               c++;


  }
  printf("%d\n",c);
  if(c==row)
    printf(" match ");
  else
    printf("not match");

}
