#include<stdio.h>
int main()
{
    char a[30]="SAMIUL ALIM SAMI + ";
    char b[30]="mitu chowdhury";
    strlwr(a);
    strupr(b);
    strcat(a,b);
    printf("%s\n",a);
    printf("%s",b);


}

