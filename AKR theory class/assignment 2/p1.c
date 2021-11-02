#include<stdio.h>
typedef struct
{
    char name[100];
    int age;
    int Aincome;
    char gender;

} movieStar;
int main()
{
    int n,r,i;
    printf("How many Movie star?");
    scanf("%d",&n);
    movieStar s[n];
    for(i=0; i<n; i++)
    {
        printf("Enter no %d movie star's name: ",i+1);
        scanf("%*c");
        gets(s[i].name);
        printf("Enter no %d movie star's age: \n",i+1);
        scanf("%d",&s[i].age);
        printf("Enter Annual income for %d movie star's \n",i+1);
        scanf("%d",&s[i].Aincome);
        printf("Enter Gender for %d movie star's: ",i+1);
        scanf("%*c");
        scanf("%c",&s[i].gender);
    }
        r=Higestincome(s,n);
        printf("Highest annual income is %d \n",r);
        r= youngestmoviestar(s,n);
        printf("Youngest movie star's age is %d \n",r);

}
int Higestincome(movieStar s[],int n)
{
   int max=s[0].Aincome,i;
   for(i=1; i<n; i++)
   {
       if(s[i].Aincome>max)
        max=s[i].Aincome;
   }
   return max;
}
int youngestmoviestar(movieStar s[],int n)
{
    int min,i;
    min=s[0].age;
    for(i=0; i<n; i++)
    {
        if(s[i].age<min)
        min=s[i].age;
    }
    return min;
}
