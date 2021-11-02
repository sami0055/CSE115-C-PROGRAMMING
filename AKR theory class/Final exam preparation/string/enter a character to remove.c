#include<stdio.h>
int main()
{
   char a[100],ch;
   gets(a);
   printf("Enter a character to remove from the string: ");
   scanf("%c",&ch);
   toremve(a,ch);
   printf("%s",a);


}
void toremve(char s[],char ch)
{
    int i=0,len;
    len=strlen(s);
    while(i<len && s[i]!=ch)
    {
        i++;
    }

    while(i<len)
    {
        s[i]=s[i+1];
        i++;
    }
}
