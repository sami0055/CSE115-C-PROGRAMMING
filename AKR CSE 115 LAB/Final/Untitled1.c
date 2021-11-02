#include<stdio.h>
typedef struct
{
    char a[100];
} patient;
int main()
{
   int r;
   patient p[1];
   AskQuestion(p,1);

}
void AskQuestion(patient p[],int n )
{

     int i,count=0;

         for(i=0; i<n; i++)
    {
        printf("Are u Suffering in fever yes or no?");
        gets(p[i].a);
          if(p[i].a=="YES")
          {
              ++count;
          }

        printf("Triredness yes or no??");
        gets(p[i].a);
            if(p[i].a=="YES")
            {
                 ++count;
            }




            printf("sore throat??");
        gets(p[i].a);
            if(p[i].a=="YES")
            {
                 ++count;
            }



        printf("Dry cough??");
        gets(p[i].a);
            if(p[i].a=="YES")
            {
                 ++count;
            }


            printf("%d\n",count);
        if(count>=2)
       printf("%d Go for covid test",i+1);
   else
    printf("%d NO need",i+1);
    }


    }





