#include<stdio.h>
int main()
{

 int n,t,start,stop,i,array[100];

 printf("Enter number of elements in array:");
 scanf("%d",&n);
 start=0;
 stop=n-1;
 printf("Input %d number of elements in the array :",n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&array[i]);
 }

 printf("Input array elements\n:");
 for(i=0;i<n;i++)
 {
 printf("% 5d",array[i]);
 }

 while(start<=stop){
 t = array[start];
 array[start] = array[stop];
 array[stop] = t;
 start++;
 stop--;
 }

 printf("Reversed array\n:");
 for(i=0;i<n;i++)
 {
 printf("% 5d",array[i]);
 }
}
