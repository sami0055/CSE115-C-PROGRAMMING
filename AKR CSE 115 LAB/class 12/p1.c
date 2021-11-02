int main()
{
    char s1[80],s2[80];
    int length1,length2;
    gets(s1);
    length1=strlen(s1);
    gets(s2);
    length2=strlen(s2);
    if(length1<length2)
    {
        puts(s1);
    }
    else if(length2<length1)
    {
        puts(s2);
    }
    else
        puts(s1);
}
