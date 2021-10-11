#include<stdio.h>
int trueChecker(int c[int n]);
int main()
{
    int n;
    int c,x;
    printf("Enter the name of array: ");
    scanf("%c",&c);
    printf("Enter the size of array");
    scanf("%d",&n);
    x=treuChecker(c,n);
    printf("%c",x);

}
int trueChecker(int c[int n])
{

    int a[n],i;
    char t;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]==0 && a[i]<0)
        {
             t='n';
             break;
        }

            else
                t='y'; break;

    }
    return t;

}
