#include<stdio.h>
int minarray(int arr[],int size){
int min=arr[0];
int i;
for(i=0;i<size;i++){
if(arr[i]<min){
min=arr[i];
}
}//end of for
return min;
}//end of function

int main(){
int n,min,i;
scanf("%d",&n);
int numbers[n];
//declaration of array
   for(i=0; i<n; i++)
   {
       scanf("%d",&numbers[i]);
   }

min=minarray(numbers,n);//passing array with size
printf("minimum number is %d \n",min);
return 0;
}
