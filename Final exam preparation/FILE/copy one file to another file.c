#include<stdio.h>
int main()
{
    FILE *p,*q;
    char a[100],b[100],ch;
    gets(a);
    gets(b);
   p=fopen(a,"r");
   q=fopen(b,"w");
   if(p==NULL || q==NULL)
   {
       printf("Error");
       return;
   }
   else
   {
       while(1==1)
       {
           ch=fgetc(p);
           if(ch==EOF)
            break;
           ch=toupper(ch);
           fputc(ch,q);
       }
   }
   printf("File successfully copied");
   fclose(p);
   fclose(q);
   return 0;
}
