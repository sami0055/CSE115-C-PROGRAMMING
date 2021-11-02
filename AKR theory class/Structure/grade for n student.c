#include<stdio.h>
typedef struct
{
    char n[50];
    float id;
    float m;
    char g;
}student;
float average(student s[],int N);
int main()
{
    int i,N;
    printf("How many student?");
    scanf("%d%*c",&N);
    float avg;
    student s[N];
    for(i=0; i<N; i++)
    {
        printf("Name: ");
        gets(s[i].n);
        printf("ID: ");
        scanf("%d",&s[i].id);
        printf("Mark: ");
        scanf("%f",&s[i].m);
        avg=average(s,N);
        scanf("%*c");
    }
    printf("average is %.2f",avg);
}
float average(student s[],int N)
{
    float sum=0,avg;
    int i;
    for(i=0; i<N; i++)
    {
        sum=sum+s[i].m;
    }
    avg=sum/N;
    return avg;
}
