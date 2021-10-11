#include<stdio.h>
typedef struct
{
    char name[30];
    int kg;
    int g;
}weight;
int main()
{
    weight s[2];
    int i;
    for(i=0; i<2; i++)
    {
    printf("Enter name for person %d: ",i+1);
    gets(s[i].name);
    printf("Enter weight in kg for person %d: ",i+1);
    scanf("%d",&s[i].kg);
    printf("Enter weight in gm for person %d: ",i+1);
    scanf("%d",&s[i].g);
    scanf("%*c");
    }

   int sumkg=0,sumg=0,gm,kg,gm2;
   for(i=0; i<2; i++)
   {
       sumkg=sumkg+s[i].kg;
       sumg=sumg+s[i].g;
   }
   gm=sumkg*1000+sumg;
   kg=gm/1000;
   gm2=gm%1000;
   printf("Total weight %d kg %d gm \n",kg,gm2);

   int min=s[0].kg,x,min2=s[0].g;
   for(i=0; i<2; i++)
   {
       if(s[i].kg <min)
       {
           min=s[i].kg;
           min2=s[i].g;
           x=i;
       }
   }
   printf("Less weight for %s \n",s[x].name);
   FILE *p;
   p=fopen("weight.txt","w");

   if(p==NULL)
    printf("Error");
   else
   {
       fprintf(p,"%s",s[x].name);
   }


}
