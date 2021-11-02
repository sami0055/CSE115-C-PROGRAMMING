#include<stdio.h>
int main()
{
    int a[11], b[11], i, temp;
    for(i=0; i<11; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<11; i++)
    {
        b[i]=a[i];
    }
    if(a[5]%2==0)
        printf("  Even\n");
    else
        printf(" middle elements is %d which odd\n",a[5]);

    temp = a[0];
    a[0] = a[10];
    a[10] = temp;

    for(i=0; i<11; i++)
    {
        printf(" Array after interchange: %d ", a[i]);
    }
    printf("\n");
    for(i=0; i<11; i+=2)
    {
        printf("Printing Alternate elements: %d ", a[i]);
    }

    return 0;
}
