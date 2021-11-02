
#include<stdio.h>
int main()
{
    int first,second,summation,number;
    printf("Enter a 4 digit number: ");
    scanf("%d",&number);

    first=number/1000;
    second=number%10;
    summation=first+second;
    printf("%d",summation);
}
