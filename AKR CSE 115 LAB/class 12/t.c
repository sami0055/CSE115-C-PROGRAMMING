#include<stdio.h>
main()
{
    int i=0;
    char STR[100];
    printf("Enter String: ");
    gets(STR);
    printf("ASCII VALUES:");
    do
    {
        if(STR[i]==' ')
            i++;

        printf(" %d ", STR[i++]);
    }
    while(STR[i]);
    return 0;
}
