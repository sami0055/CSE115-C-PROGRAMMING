#include<stdio.h>
int search(char *s,char p);
int main()
{
    char a[100],ch;
    gets(a);
    char *p;
    p=a;
    printf("Enter a character to search: ");
    scanf("%c",&ch);
    int r=search(p,ch);
    if(r==-1)
        printf("Character not found: ");
    else
        printf("%c found at %d index",ch,r);

}
int search(char *s,char p)
{
    int i=0;
    while(*s!='\0')
    {
        if(*s==p)
           return i;
        s++;
        i++;
    }
    return -1;
}
