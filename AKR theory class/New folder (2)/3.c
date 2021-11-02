#include<stdio.h>
void enigma(int n)
{
    if(n!=0)
    {
        enigma(n/2);
        printf("%d",n%2);
    }
}
void main()
{
    enigma(13);
}
