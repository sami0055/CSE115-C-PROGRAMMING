int main()
{
    int i,len,c=0;
    char a[88],p;
    gets(a);
    printf("Which character?");
    scanf("%c",&p);
    len=strlen(a);
    for(i=0; i<len; i++)
    {
        if(a[i]==p)
            c++;
    }
    printf("%c appeared %d times ",p,c);
}
