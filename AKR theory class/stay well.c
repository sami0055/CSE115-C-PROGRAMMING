#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("Visit.txt","r");
    if(fp==NULL)
    {
        printf("Error");
        return;
    }
    int x;
    int y;
    int z;
    fscanf(fp,"%d %d %d",&x,&y,&z);
    printf("%d %d %d\n",x,y,z);

    FILE *p;
    int a,b,c;
    p=fopen("Pyment.txt","w");
    if(p==NULL)
        printf("Error");
    else
    {
        if(x<=5)
           a=3*1000;
             if(y<=15)
            b=5*1000+500*10;
            if(z<=11)
            c=5*1000+6*600;
    }
    fprintf(p,"%d\n%d\n%d",a,b,c);

     fclose(fp);
}
