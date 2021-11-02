#include<stdio.h>
typedef struct
{
    char name[100];
    int id;
    int p;
}Book_info;
int main()
{
 Book_info b[2];
 int i;
 for(i=0; i<2; i++)
 {
     printf("Book name: ");
     gets(b[i].name);
     printf("ID");

     scanf("%d",&b[i].id);
     printf("Present price: ");
     scanf("%d",&b[i].p);
     scanf("%*c");


 }
 price_incr(b,2);

}
void price_incr(Book_info b[],int n)
{
    int i;
    float sum=0;
      FILE *p;
    p=fopen("Sop.txt","w");
    if(p==NULL)
    {
        printf("Error");
    }
    else
    {
        for(i=0; i<n; i++)
    {
        if((b[i].p)%2==0)
        {
             b[i].p=b[i].p*2;
              fprintf(p," %s New price: %d\n",b[i].name,b[i].p);
        }

        else if((b[i].p)%2==1)
        {
             b[i].p=b[i].p+b[i].p*0.1;
             fprintf(p," %s New price: %d\n",b[i].name,b[i].p);
        }


            sum=sum+b[i].p;

    }
    }
     printf("Total price: %f \n",sum);
    for(i=0; i<n; i++)
    {
        printf("%s\n",b[i].name);
    }
     for(i=0; i<n; i++)
        {
            fprintf(p,"Book Name: %s\n",b[i].name);
        }


        fclose(p);




}
