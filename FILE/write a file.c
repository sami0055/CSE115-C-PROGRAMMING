#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("data.txt","w");
    if(fp==NULL)
    {
        printf("Error..");
        return;
    }
    int a=55;
    float b=4.5;
    char c='Z';
    fprintf(fp,"%d %f %c\n",a,b,c);
    fprintf(fp,"%d %f %c",a*2,b-2,c-1);
    fclose(fp);

}
