int main()
{
    char s[100],s2[100],x,y;
    printf("Enter first string\n");
    gets(s);
    printf("Enter second string\n");
    gets(s2);
    int len1,len2,i,j,count=0;
    len1=strlen(s);
    len2=strlen(s2);

    for(i=0,j=0; i<len1,j<len2; i++,j++)
    {   x=s[i];
        y=s2[j];
        if(x!=y)
        {
            count++;
            break;
        }


    }
    if(count==1)
        printf("Not equal");
    else
        printf(" Equal");

}
