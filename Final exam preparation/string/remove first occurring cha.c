#include<stdio.h>
int main()
{
    char a[100];
    int i,len,j,count=0,index;
    gets(a);
    len=strlen(a);
    for(i=0; i<len-1; i++)
    {

        for(j=i+1; j<len; j++)
        {
             if(a[i]==a[j])
             {
                 count++;
                 index=i;
                 break;
             }
        }
        if(a[i]==a[j])
            break;

    }
    if(count==1)
    {
        while(index<len)
        {
            a[index]=a[index+1];
            index++;
        }

    }
    printf("%s",a);

}

