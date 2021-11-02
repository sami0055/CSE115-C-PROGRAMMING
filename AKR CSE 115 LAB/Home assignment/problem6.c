#include<stdio.h>
int main()
{
    int N;
    char ch;
    printf("Enter a latter: ");
    scanf("%c",&ch);
    printf("Enter the value of N: ");
    scanf("%d",&N);

    N=ch+N;

    printf("%c",N);

}
