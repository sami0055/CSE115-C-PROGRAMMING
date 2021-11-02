#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int a[n],*p;
    p=a;
    for(i=0; i<n; i++)
    {
        scanf("%d",(p+i));
    }
    shordecending(a,n);
    printarr(a,n);

}
void printarr(int *arr,int n)
{
  int i;
  for(i=0; i<n; i++)
  {
      printf("%d ",*(arr+i));
  }
}
void shordecending(int *arr,int n)
{
    int i,temp;

   for(i=0; i<n; i++)
   {
      int *e_arr=arr+n-1;
       while(*e_arr>*arr)
       {

           temp=*e_arr;
           *e_arr=*arr;
           *arr=temp;
          e_arr--;


       }

       arr++;

   }

        }
