#include<stdio.h>
void downWards(int n)
{
    int i;
    for(i=n; i>=1; i--)
    {
           if(i%2==0)
        {
             printf("%d ",i);
        }

    }

}
main()
{
    int x;
    printf("Enter the value of x");
    scanf("%d",&x);
    downWards(x);
}
