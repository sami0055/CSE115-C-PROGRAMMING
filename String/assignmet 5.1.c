#include<stdio.h>
int main()
{
    char a[88],b[88];
    int i,p,v=0,c=0,w=1;
    gets(a);
    printf("Enter another sentence:\n");
    gets(b);
    int len1=strlen(a);
    int len2=strlen(b);
    for(i=0; i<len1; i++)
    {
        char t=tolower(a[i]);
        if(t==' ')
            w++;
        else if(t=='a'||t=='e'||t=='i'||t=='o'||t=='u')
            v++;
        else
        c++;
    }
    int v2=0,c2=0,w2=1;
    for(i=0; i<len2; i++)
    {
        char p=tolower(b[i]);
        if(p==' ')
            w2++;
        else if(p=='a'||p=='e'||p=='i'||p=='o'||p=='u')
            v2++;
        else
            c2++;
    }
    if(v==v2 && c==c2 && w==w2)
        printf("YES");
    else
        printf("NO");
}
