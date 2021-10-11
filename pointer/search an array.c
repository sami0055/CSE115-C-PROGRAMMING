#include<stdio.h>
int main()
{
    int i,n,*p,search_index;
    printf("Enter the size of array: \n");
    scanf("%d",&n);
    int a[n];

     scan(a,n);
     int to_search;
     printf("Enter element to search:\n");
     scanf("%d",&to_search);
     search_index=search(a,n,to_search);
     if(search_index==-1)
     {
         printf("%d Not found",to_search);
     }
     else
        printf("%d  found at %d position ",to_search,search_index);

}
int search(int *arr,int n,int value)
{
  int *endarray=arr+n-1,i=0;
  while(arr<=endarray && *arr!=value)
  {

         arr++;
      i++;


  }
   if(arr<=endarray)
    return i;

  else return -1;
}
void scan(int *arr,int n)
{
    int *arrend=(arr+n-1);
    while(arr<=arrend)
    {
        scanf("%d",arr++);
    }
}
void print(int *arr,int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d ",*(arr+i));
    }
}
