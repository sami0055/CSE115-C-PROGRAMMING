#include<stdio.h>
int main()
{
    int i,j;
    char a[100],b[100];
    fgets(a,sizeof a,stdin);
    int len=strlen(a);

    for(i=0; i<len; i++)
    {

        if(a[i]==' ')
            i++;
        else
        {
            for(j=0; j<len; j++)
            b[j]=a[i];
        }

    }

}
