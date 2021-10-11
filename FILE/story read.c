#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("story.txt","r");
    if(fp==NULL)
    {
        printf("Error");
        return;
    }
    char ch;
    while(1==1)
    {
         ch=fgetc(fp);
         if(ch==EOF)
            break;
    printf("%c",ch);
    }

    fclose(fp);
}
