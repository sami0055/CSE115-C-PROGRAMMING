#include <stdio.h>
int main()
{
    int a[5];
    arrayDiv(a,5);
}
void arrayDiv(int arr[],int size)
{
     int i,a=0;
    printf("Enter an array of 5 elements\n");
    printf("Sample Input :");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<size; i++)
    {
        int count=0;
        for(int j=0; j<size; j++)
            if((arr[i]%arr[j])==0)
                count++;
        if(count==5)
        {
            printf("Sample Output : %d ",arr[i]);
            a++;
        }
    }
    if(a==0)
        printf("No such element found");
    return 0;

}

