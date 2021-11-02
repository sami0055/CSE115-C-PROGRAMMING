#include<stdio.h>
float get_average(int a[],int n);
int get_highest(int a[],int n);
int main()
{
    int i,j,a[5];

        for(i=0; i<5; i++)
        {
            scanf("%d",&a[i]);
        }

    int r=get_highest(a,5);
    printf("Highest num: %d\n",r);
    float avg=get_average(a,5);
    printf("Avg is %f",avg);

}
int get_highest(int a[],int n)
{
    int max=a[0],i,j;
    for(i=0; i<n; i++)
    {
            if(a[i]>max)
                max=a[i];
    }
    return max;

}
float get_average(int a[],int n)
{
    float sum=0,avg;
    int i,j;
    for(i=0; i<n; i++)
    {

            sum=sum+a[i];
    }
    avg=sum/n;
    return avg;
}
