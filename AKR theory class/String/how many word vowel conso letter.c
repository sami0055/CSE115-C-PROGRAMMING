int main()
{
    int i,len,v=0,w=1,c=0;
    char a[88],p;
    gets(a);
    len=strlen(a);
    for(i=0; i<len; i++)
    {   p=tolower(a[i]);
     if(p==' ')
            w++;
        else if(p=='a'||p=='e'||p=='i'||p=='o'||p=='u')
            v++;
        else
            c++;
    }
    printf("Vowel %d \n",v);
    printf("Word %d \n",w);
    printf("Consonant %d \n",c);
    printf("Letter %d ",c+v);
}
