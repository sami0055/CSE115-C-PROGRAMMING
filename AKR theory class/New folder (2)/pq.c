#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30]="Twin";
    char s2[30]="little ";
    char s3[30]="kle ";
    char s4[30]="star.";
    char s5[30];
    strcat(s1,s3);
    printf("%s\n",s1);
    strcpy(s5,"");
    printf("%s\n",s5);
    strcat(s2,s4);
    printf("%s\n",s2);
    strcat(s1,s2);
    printf("%s\n",s1);
    strncat(s5,s1,8);
    printf("%s\n",s5);
    strcat(s5,s1);
    printf("%s\n",s5);
    strupr(s5);
    printf("%s",s5);


}
