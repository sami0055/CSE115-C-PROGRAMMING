#include<stdio.h>
typedef struct
{
    char title[100];
    char author[100];
    int b_id;


}book;
int main()
{
    book a[2];
    int i;
    FILE *p,*f;
    p=fopen("populate","w");
    f=fopen("store","r");
    char ch;
    if(p==NULL)
        printf("Error");
        else
    {
        for(i=0; i<2; i++)
        {
            printf("Enter Title: ");
            gets(a[i].title);
            printf("Enter author: ");
            gets(a[i].author);
            printf("Enter ID: ");
            scanf("%d",&a[i].b_id);
        }
        for(i=0; i<2; i++)
        {
            fprintf(p,"Title: %s Author: %s ID: %d ",a[i].title,a[i].author,a[i].b_id);
        }
    }
    if(f==NULL)
        printf("error");
    else
    {
        while(1==1)
        {
            ch=fgetc(p);
            if(ch==EOF)
                break;
            fputc(ch,f);
        }
    }
    fclose(p);
    fclose(f);
}
