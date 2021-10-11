#include<stdio.h>
int main()
{
    int a[100],i,n,b[100];
    printf("Enter the size of array: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
for(i=0; i<n; i++)
{
    b[i]=a[i];
}

    printf("Elements of a are:  ");
    for(i=0; i<n; i++)
    {

        printf("%d\t",a[i]);

    }
    printf("\n");

    printf("Elements of b are: ");
    for(i=0; i<n; i++)
    {
        printf("%d\t",b[i]);


    }


    return 0;
}
