int main()
{
    int i,len,c=-1;
    char a[80],p;
    gets(a);
    len=strlen(a);
    printf("Enter a character");
    scanf("%c",&p);
    for(i=0; i<len; i++)
    {
        if(a[i]==p)
        {
            c=i;

        }
    }
    if(c==-1)
        printf("%c not found ",p);
    else
    printf("%c found at %d ",p,c);
}
