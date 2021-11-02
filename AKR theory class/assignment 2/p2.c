#include<stdio.h>
typedef struct
{
    int ID;
    char Gender;
    float CT;//class test(CT)
    float MC;//mid term score
    float FC;//final exam score
    float TS;//total score


}CSE;
int highest(CSE s[],int n);
int Failedst(CSE s[],int n);
int main()
{
    int N,i;
    printf("How many student's ?");
    scanf("%d",&N);
    CSE s[N];
    for(i=0; i<N; i++)
    {
        printf("Enter ID for student no %d : ",i+1);
        scanf("%d",&s[i].ID);
        printf("Enter Gender for student no %d: ",i+1);
        scanf("%c%*c",&s[i].Gender);
        printf("Enter class test score for %d student: ",i+1);
        scanf("%f",&s[i].CT);
        printf("Enter mid term score for %d student: ",i+1);
        scanf("%f",&s[i].MC);
        printf("Enter Final exam score for %d student: ",i+1);
        scanf("%f",&s[i].FC);
        printf("Enter total score for %d student: ",i+1);
        scanf("%f",&s[i].TS);


    }
    int r=Failedst(s,N);
    printf("%d student failed\n",r);
     int t=highest(s,N);
    printf("ID: %d who got highest mark",t);



}
int Failedst(CSE s[],int n)
{
    int i,count=0;
    for(i=0; i<n; i++)
    {
        if(s[i].TS<60)
            count++;
    }
    return count;
}
int highest(CSE s[],int n)
{
    int i,max,x;
    max=s[0].TS;
    for(i=0; i<n; i++)
    {
        if(s[i].TS>max)
        {
            max=s[i].TS;
            x=i;
        }
    }
    return s[x].ID;

    }
