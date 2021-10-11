int main()
{
    char a[88],b[88],n,x,t;
    int i,j;
    printf("Enter first sentence : ");
    gets(a);
    printf("Enter second sentence: ");
    gets(b);
    int len1=strlen(a);
    int len2=strlen(b);
    for(i=0; i<len1; i++)
    {
         t=a[i];
        for(j=0; j<len2; j++)
        {
         x=b[j];
        if(t==x)
        {
            n=t;
            break;
        }

        }
        if(t==x)
        {
            break;
        }

    }
     printf("First Matched letter: %c",n);

}
