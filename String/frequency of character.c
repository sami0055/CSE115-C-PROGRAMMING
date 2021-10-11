#include<stdio.h>
int main()
{
    char a[100],c;
    int i,j,count=0;
    fgets(a,sizeof a,stdin);
    int len=strlen(a);
    printf("Enter the character: \n");
    scanf("%c",&c);
    for(i=0; i<len-1; i++)
    {
      if(a[i]==c)
        count++;
    }
    printf("%c is %d times ",c,count);
}
