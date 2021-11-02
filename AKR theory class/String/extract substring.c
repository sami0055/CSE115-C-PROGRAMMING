#include<stdio.h>
int main()
{
    char a[100],b[100];
    int pos,len,c=0;
    printf("Input the string: \n");
    fgets(a,sizeof a,stdin);
    printf("Enter the position to start: ");
    scanf("%d",&pos);
    printf("Enter the length of the substring: \n");
    scanf("%d",&len);

    while(c<len)
    {
        b[c]=a[pos+c-1];
        c++;
    }
    b[c]='\0';
    printf("The substring from the string is %s",b);
}
