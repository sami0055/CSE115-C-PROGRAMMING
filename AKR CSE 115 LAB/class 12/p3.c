int main()
{
    char s[80],p;
    int i,len;
    gets(s);
    len=strlen(s);
    for(i=0; i<len; i++)
    {
        p=s[i];
        if(p>='A' && p<='Z')
        {
            printf("%c",p+32);
        }
        else if(p>='a' && p<='z')
        {
            printf("%c",p-32);
        }
        else
            printf("%c",p);
    }

}
