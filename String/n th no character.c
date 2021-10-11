int main()
{
    char a[80];
    int p,i,len;
    gets(a);
    len=strlen(a);
    printf("Which position?");
    scanf("%d",&p);
    if(p>len-1)
        printf("No character");
    else
    printf("%c",a[p]);

}
