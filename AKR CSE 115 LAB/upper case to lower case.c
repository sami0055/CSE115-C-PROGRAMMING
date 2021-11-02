#include<stdio.h>
int main()
{
    char ch;
    printf("Enter upper case latter: ");
    scanf("%c",&ch);
    ch=ch+32;
    printf("Lower case latter is %c",ch);
}
