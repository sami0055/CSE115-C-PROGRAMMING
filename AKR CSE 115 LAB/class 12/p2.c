int main()
{
    char s[80];
    int len,i;
    gets(s);
    len=strlen(s);
    for(i=0; i<len; i++)
    {
        if(s[i]==' ')
            i++;
        s[i];
        printf("%d ",s[i]);

    }
}
