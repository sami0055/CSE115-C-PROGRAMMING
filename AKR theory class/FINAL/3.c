#include<stdio.h>
int main()
{
    int i;
    char a[100];
    printf("Enter any string: ");
    gets(a);
    printf("The first word of the string: ");
    for(i=0;a[i]!=' ';i++){
        printf("%c",a[i]);
    }
    return 0;
}
