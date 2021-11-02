#include<stdio.h>
void engima(int n){
if(n==0)
    return;
else{

    engima(n/2);
    printf("%d",n%2);
}

}
void main()
{
    engima(17);
}
