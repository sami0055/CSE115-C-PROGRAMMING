#include <stdio.h>
int main()
{
    int i;
    char p[5],x;
    printf("enter array elements: ");
    for(i=0; i<5; i++)
    {
        scanf("%c", &p[i]);
    }
    printf("ASCII values of 2nd & 3rd elements: ");
    printf("%d ",p[1]);
    printf("%d",p[2]);
    {
        if(p[5] == 'a' || p[5] == 'e' || p[5] == 'i' || p[5] == 'o' ||  p[5]== 'u' || p[5] == 'A' || p[5] == 'E' || p[5] == 'I' || p[5] == 'O' || p[5] == 'U')

            printf("  Vowel\n");
        else
            printf("  Consonant\n");
    }
x=p[0];
p[0]=p[3];
p[2]=p[0]; //3rd part incomplete



    return 0;
}
