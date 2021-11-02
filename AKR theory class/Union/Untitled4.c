#include<stdio.h>
typedef struct
{
    char name[50];
    char gender;
    int age;
    char party_name[100];
    int total_vote;

}candidate;
int main()
{
   int n,i;
   printf("Enter how many candidate: ");
   scanf("%d%*c",&n);
   candidate a[n];
   for(i=0; i<n; i++)
   {
       printf("Name: ");
       gets(a[i].name);
       printf("Enter gender: ");
       scanf("%c",&a[i].gender);
       printf("AGE: ");
       scanf("%d%*c",&a[i].age);
       printf("Party name: ");
       gets(a[i].party_name);
       printf("Total vote: ");
       scanf("%d%*c",&a[i].total_vote);

   }
   for(i=0; i<n; i++)
   {
       printf("Name: %s\n",a[i].name);
       printf("Gender: %c\n",a[i].gender);
       printf("AGE: %d\n",a[i].age);
       printf("Party name: %s\n",a[i].party_name);
       printf("Total vote; %d\n",a[i].total_vote);
   }
   int r=getwinner(a,n);
     printf("Information for who get winner: \n");
     printf("Name: %s\n",a[r].name);
     printf("Gender: %c\n",a[r].gender);
     printf("Age: %d\n",a[r].age);
     printf("Party name: %s\n",a[r].party_name);
     printf("Total vote: %d",a[r].total_vote);
}

int getwinner(candidate a[],int n)
{
    int max=a[0].total_vote,x;
    int i;
    for(i=0; i<n; i++)
    {
        if(a[i].total_vote>max)
        {
            max=a[i].total_vote;
            x=i;
        }
    }
    return x;
}
