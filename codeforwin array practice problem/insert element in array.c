#include<stdio.h>
int main()
{
    int a[100],i,n,pos,num;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }

     printf("Enter the num which you want to insert : ");
    scanf("%d",&num);

    printf("Enter the position: ");
    scanf("%d",&pos);

if(pos>n+1 || pos<0)
{
    printf("NOt valid ");

}

else
{
    for(i=n; i>=pos; i--)
    {
        a[i]=a[i-1];
    }

    a[pos-1]=num;
    n++;
    printf("Array elements after insertion ");
    for(i=0; i<n; i++)
    {
       printf("%d\t",a[i]);

    }
}


    return 0;
}
