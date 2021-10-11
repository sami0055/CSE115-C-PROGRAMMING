#include<stdio.h>
typedef struct
{
    int Student_ID;
    float total_mark;
}Students;
int main()
{
    int N,i;
    printf("How many students? ");
    scanf("%d",&N);
    Students a[N];
    for(i=0; i<N; i++)
    {
        printf("Enter ID: ");
        scanf("%d",&a[i].Student_ID);
        printf("Enter Total mark: ");
        scanf("%f",&a[i].total_mark);

    }
    int r=count(a,N);
    printf("%d of student got less than avg",r);


}
int count(Students a[],int N)
{
    int i,c=0;
    float sum=0,avg;
    for(i=0; i<N; i++)
    {
        sum=sum+a[i].total_mark;
    }
    avg=sum/N;
    for(i=0; i<N; i++)
    {
        if(a[i].total_mark<avg)
            c++;
    }
    return c;


}
