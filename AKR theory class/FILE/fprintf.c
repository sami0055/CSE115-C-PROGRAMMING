#include<stdio.h>
int main()
{
    FILE *fpt;
    char name[25];
    int age;
    fpt=fopen("info.txt","a");
    if(fpt==NULL)
    {
        printf("File does not exist: ");
        return;
    }
    else
    {
        printf("File is opened ");
        printf("Enter your name: ");
        gets(name);
        printf("Enter your age: ");
        scanf("%d",&age);

        fprintf(fpt,"Name: %s Age: %d\n",name,age);
        printf("File written successfully");
        fclose(fpt);
    }
}
