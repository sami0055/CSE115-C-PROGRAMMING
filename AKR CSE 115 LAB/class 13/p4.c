int main()
{
    char s[80],x,y;
    int i,j=0,n,c=0;
    gets(s);
    n=strlen(s);
    for(i=0; i<n-1; i++)
    {
        x=s[i];
        for(j=i+1; j<n; j++)
        {
            y=s[j];
         if(x==y)
        {
            c++;
            break;
        }
        }
        if(x==y)
        break;
    }
   if(c==1)
    printf("The first repeated character is %c",x);

}
