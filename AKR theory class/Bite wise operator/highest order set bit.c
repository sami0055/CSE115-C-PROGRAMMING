#include<stdio.h>
int main()
{
    int num,order=-1,i;
    printf("Enter any num: ");
    scanf("%d",&num);
    int n=sizeof(int)*8;
    for(i=0; i<n; i++)
    {
        if((num>>i)&1)
          order=i;
    }
    if(order != -1)
    printf("Highest order %d num %d bit",num,i);
    else
        printf(" 0 has no set bits ");
    return 0;
}
