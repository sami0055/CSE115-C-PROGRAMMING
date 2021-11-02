#include<stdio.h>
int main()
{
    int gram,kg,g2;
    printf("Enter the value of: ");
    scanf("%d",&gram);

    kg=gram/1000;
    g2=gram%1000;
    printf("%d kg %d gram",kg,g2);
    return 0;
}
