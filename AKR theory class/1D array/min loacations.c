#include<stdio.h>
int main()
{
    int i,n;
    printf("ENter the size of array");
    scanf("%d",&n);
    float a[n];
    for ( i=0 ; i<n ; i++ )
    {
        printf("Enter the Numbers\n");
        scanf("%f",&a[i]);
    }
    float min=a[0];
    for ( i=0 ; i<n ; i++ )
    {
        if ( a[i] < min )

            min = a[i];

    }
    printf("The numbers are:\n");

    for(i=0; i<n; i++)
    {
        printf("Array[%d]=%.2f\n",i,a[i]);
    }
    printf("Minimum value %.2f and locations are: ",min);
    for ( i=0 ; i<n ; i++ )
    {
        if ( a[i] == min )
        {
            printf("%d ",i);
        }
    }
    return 0;

}
