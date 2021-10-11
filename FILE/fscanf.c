#include<stdio.h>
int main()
{
    FILE *ptr;
    char Name[50];
    char lname[50];
    ptr=fopen("info.txt","r");

    if(ptr==NULL)
    {
        printf("File does not exist");
        return;
    }
    else
    {
        printf("File opened\n");
        fscanf(ptr,"%s %s",&Name,&lname);
        printf("%s %s",Name,lname);
        fclose(ptr);
    }
}
