#include<stdio.h>
int main()
{

    int n,m;
    printf("Enter a number: ");
    scanf("%d",&n);

    m=n%3;
    switch(m)
    {
    case 0:
        printf("Multiple of 3");
        break;
    case 1:
        printf("Not multiple of 3");
        break;
    case 2:
        printf("Not multiple of 3");
    }

}
