#include<stdio.h>
int main()
{
    int n;
    printf("Please enter a positive number: ");
    scanf("%d",&n);
    while(n<0)
    {
        printf("Enter a positive number ,BE POSITIVE ");
        scanf("%d",&n);
    }
}
