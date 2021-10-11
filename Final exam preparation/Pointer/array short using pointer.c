#include<stdio.h>
void shortDec(int *a,int n);
void input(int *a,int n);
void printarr(int *a,int n);
int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d",&n);
    int a[n];
    input(a,n);
    shortDec(a,n);
    printarr(a,n);


}
void printarr(int *a,int n)
{
    int *enda;
    enda=a+n-1;
    while(a<=enda)
    {
        printf("%d ",*a);
        a++;
    }
}
void shortDec(int *a,int n)
{
   int i,j,temp;
   for(i=0; i<n-1; i++)
   {
       for(j=0; j<n; j++)
       {
           if(*(a+i)<*(a+j))
           {
                  temp=*(a+i);
                 *(a+i)=*(a+j);
                 *(a+j)=temp;
           }

       }
   }

   }
void input(int *a,int n)
{
    int *enda;
    enda=a+n-1;
    while(a<=enda)
    {
        scanf("%d",a);
        a++;
    }
}
