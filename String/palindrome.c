#include<stdio.h>
int main()
{
    char a[100];
    gets(a);
    int i,j,len,count=0;
    len=strlen(a);
    for(i=0,j=len-1; i<len,j>=0; i++,j--)
    {

            if(a[i]==a[j])
                count++;

    }
    if(count==len)
        printf("Palindrome");
    else
        printf("Not palindrome");
}
