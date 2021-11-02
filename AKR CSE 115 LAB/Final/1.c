#include<stdio.h>
typedef struct
{
    char name[100];
    char phone[11];
    int Eid_bonus;
    int hour;

}Customer;
int main()
{
   Customer a[3];
  int i;
  for(i=0; i<3; i++)
  {
      printf("Name: ");
      gets(a[i].name);
      scanf("%*c");
      printf("Phone num: ");
    scanf("%*c");
      gets(a[i].phone);
      printf("Hour: ");
      scanf("%d",&a[i].hour);
    scanf("%*c");


  }

  FILE *p;
  p=fopen("Custome.txt","w");
  if(p==NULL)
  {
      printf("ERror");
  }
  else
  {
      for(i=0; i<3; i++)
      {
          fprintf(p,"Name: %s Mobile: %s \n",a[i].name,a[i].phone);
      }
  }

  eidBonus(a,3);


}
void eidBonus(Customer a[],int n)
{

    int i;
    for(i=0; i<n; i++)
    {
          if(a[i].hour>1 && a[i].hour<10 )
          {
              a[i].Eid_bonus=a[i].hour*5;
               printf("Name: ");
               puts(a[i].name);
               printf("Phone");
               puts(a[i].phone);
               printf("Eid bonus: %d ",a[i].Eid_bonus);

          }
          else if(a[i].hour==10)
          {
              a[i].Eid_bonus=9*5;
               printf("Name: ");
               puts(a[i].name);
               printf("Phone");
               puts(a[i].phone);
               printf("Eid bonus: %d ",a[i].Eid_bonus);
          }
    }

}

