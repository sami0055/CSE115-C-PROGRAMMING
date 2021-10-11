#include<stdio.h>
int main()
{
    char a[100],c,t;
    int i=0,len,j,count=0;
    fgets(a,sizeof a,stdin);
    len=strlen(a);

    printf("Enter the which u want to remove: ");
    scanf("%c",&c);

     for(i=0; i<len; i++)
     {

        if(a[i]==c)
        {
            while(i<len-1)
            {
                a[i]=a[i+1];
                count++;
                i++;
            }
        }
        if(count!=0)
            break;
     }
    for(i=0; i<len; i++)
     printf("%c",a[i]);
}
