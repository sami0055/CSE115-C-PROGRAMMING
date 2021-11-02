#include<stdio.h>
int main()
{
    char s1[30]="Happy ";
    char s2[30]="New Year";
    char s3[30];
    strcat(s1,s2);
    strcpy(s3,"");
    strncat(s3,s1,6);
    strcat(s3,s1);
    printf("%s",s3);
    return 0;
}
