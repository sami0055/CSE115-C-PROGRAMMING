#include<stdio.h>
int main()
{
    char a[100];
    printf("Enter any string: ");
    gets(a);
    printf("String before removing duplicates %s\n",a);
    removeduplicates(a);
    printf("After removing duplicates : %s ",a);
}
void removeduplicates(char *s)
{

    int i=0;
    while(s[i]!='\0')
    {
        removeall(s,s[i],i+1);
        i++;
    }
}
void removeall(char *s,char ch,int ind)
{
    int i;
    while(s[ind]!='\0')
    {
        if(s[ind]==ch)
        {
            i=ind;
            while(s[i]!='\0')
            {
                s[i]=s[i+1];
                i++;
            }
        }
        else
            ind++;
    }
}
