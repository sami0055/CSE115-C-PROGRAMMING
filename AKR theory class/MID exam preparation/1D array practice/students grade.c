#include<stdio.h>
int main()
{
    int i,n;
    printf("How many student??");
    scanf("%d",&n);
    float a[n],m;
    char g[n];
    for(i=0; i<n; i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        m=a[i];
        if(m>=90)
            g[i]='A';
        else if(m>=80)
            g[i]='B';
        else if(m>=70)
            g[i]='C';
        else if(m>=60)
            g[i]='D';
            else
            g[i]='F';
    }
    for(i=0; i<n; i++)
    {
         printf("Mark of %.2f is %c\n",a[i],g[i]);

    }

}
