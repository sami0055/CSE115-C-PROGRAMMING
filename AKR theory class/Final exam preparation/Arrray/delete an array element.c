#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter the size of array: ");
    scanf("%d",&N);
    int a[N],pos;
    printf("Enter array elements: ");
    for(i=0; i<N; i++)
    {
      scanf("%d",&a[i]);
    }
    printf("Enter the position for delete the element: ");
    scanf("%d",&pos);
    for(i=pos-1; i<N-1; i++)
    {
        a[i]=a[i+1];
    }
  N--;
  printf("After delete array: \n");
  for(i=0; i<N; i++)
  {
      printf("%d ",a[i]);
  }
}
