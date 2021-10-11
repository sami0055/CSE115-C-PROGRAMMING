#include<stdio.h>
int main()
{
    char data[100];
    FILE *fp1;
    fp1=fopen("data.txt","w");
    if(fp1==NULL)
    {
        printf("Error");
        return;

    }
    printf("Enter content to store: ");
    gets(data);
    fputs(data,fp1);
    fclose(fp1);

}
