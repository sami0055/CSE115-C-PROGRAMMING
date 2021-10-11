#include<stdio.h>
int main()
{
int i,n,num,pos,array[100];
printf("enter the size of array: ");
scanf("%d",&n);
for(i=0; i<n; i++)
{
    scanf("%d",&array[i]);
}
printf("Enter element to insert: ");
scanf("%d",&num);
printf("Enter position to insert: ");
scanf("%d",&pos);
if(pos>n+1 || pos<=0)
{
    printf("Invalid position!");
}

else
{
    for(i=n; i>=pos; i--)
{
    array[i]=array[i-1];
}
array[pos-1]=num;
n++;


printf("Element after insert: ");
for(i=0; i<n; i++)
{
    printf("%d\t",array[i]);
}
}
return 0;

}

