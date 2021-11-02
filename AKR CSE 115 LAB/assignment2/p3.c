int main()
{
    char s[100],p;
    int A=0,D=0,sp=0,i;
    gets(s);
    int len=strlen(s);
    for(i=0; i<len; i++)
    {

        if(s[i]>='a' && s[i]<='z')
            A++;
        else if(s[i]>='0' && s[i]<='9')
            D++;
        else
            sp++;
    }
    printf("Alphabet %d \n",A);
    printf("Digits %d \n",D);
    printf("Special character %d ",sp);
}
