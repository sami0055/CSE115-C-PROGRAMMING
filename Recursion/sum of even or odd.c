#include<stdio.h>
int main()
{
    int start,end;
    printf("Enter the value of start: ");
    scanf("%d",&start);
    printf("Enter the end value : ");
    scanf("%d",&end);
    int sum=sumofevenodd(start,end);
    printf("Sum is %d ",sum);
}
int sumofevenodd(int start,int end)
{
    if(start>end)
        return 0;
    else
        return (start+sumofevenodd(start+2,end));
}
