#include<stdio.h>
int main()
{
    int N,first,last,second,product;
    printf("Enter a four digit number: ");
    scanf("%d",&N);
    first=N/1000;
    last=N%10;
    product=first*last;

    printf("Product=%d",product);

    return 0;
}
