#include<stdio.h>
int main()
{
    char a[100],search[100];
    int i,j,c=0,len1,len2;
    printf("Enter a string: \n");
    fgets(a,sizeof a,stdin);
    len1=strlen(a);
    printf("Enter the substring: \n");
    fgets(search,sizeof search,stdin);
    len2=strlen(search);
    printf("%d\n",len1);
    printf("%d",len2);
    for(i=0; i<=len1-len2; i++)
    {
        for(j=i; j<i+len2; j++)
        {
            c=1;
            if(a[j]!=search[j-i])
            {
                c++;
                break;
            }
        }
       if(c==1)
        break;

    }
 if(c==1)
    printf("Exist");
 else
    printf("Not exist");
}
