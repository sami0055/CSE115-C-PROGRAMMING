#include<stdio.h>
int main()
{
    FILE *ptr;
    char ch[40];
    ptr=fopen("info.txt","r");
    if(ptr==NULL)
    {
        printf("File does not exist!");
        return;

    }
    else
    {
        printf("File is opened");
        while(1==1)
        {
            if(ch==EOF)
                break;
               fgets(ch,39,ptr);
               printf("%s\n",ch);
        }



    }
}
