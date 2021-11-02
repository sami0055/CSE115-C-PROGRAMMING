#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("data.txt","r");
    if(fp==NULL)
    {
        printf("Error");
        return;
    }
    int x;
    float y;
    char z;
    fscanf(fp,"%d %f %c",&x,&y,&z);
    printf("%d %.2f %c\n",x,y,z);
    fscanf(fp,"%d %f %c",&x,&y,&z);
    printf("%d %.2f %c",x,y,z);
     fclose(fp);
}
