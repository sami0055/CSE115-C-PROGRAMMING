#include<stdio.h>
int main()
{
    int i;
    float array[10];
    for ( i=0 ; i<10 ; i++ )
    {
        printf("a[%d]=",i);
        scanf("%f",&array[i]);
    }
    float max=array[0];
    for ( i=0 ; i<10 ; i++ )
    {
        if ( max<array[i] )

            max = array[i];

    }
    printf("The maximum is %.1f and it appeared in location ",max);
    for ( i=0 ; i<10; i++ )
    {
        if ( array[i] == max )
        {
            printf("%d ",i);
        }
    }
    return 0;

}
