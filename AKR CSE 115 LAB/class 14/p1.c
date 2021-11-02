
#include<stdio.h>
int main()
{
    int i,j;
    int a[5][4]= {{78,83,82,54},{81,80,23,14},{11,20,31,11},{56,79,31,90},{32,45,56,87}
    };
    for(i=0; i<5; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");

    }
}
