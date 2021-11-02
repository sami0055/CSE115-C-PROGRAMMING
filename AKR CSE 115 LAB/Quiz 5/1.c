#include<stdio.h>
typedef struct
{
    int id;
    int age;
    int bs;
    int hr;
    int ts;
}employee;
int count(employee a[],int n);
int oldest(employee a[],int N);
int main()
{
    int N,i,r,t;
    printf("How many employee?\n");
    scanf("%d",&N);
     employee a[N];
    for(i=0; i<N; i++)
    {
        printf("Enter ID for %d employee: ",i+1);
        scanf("%d",&a[i].id);
        printf("Enter Age for %d employee: ",i+1);
        scanf("%d",&a[i].age);
        printf("Enter basic salary: ");
        scanf("%d",&a[i].bs);
        printf("Enter house rent allowance :");
        scanf("%d",&a[i].hr);
        a[i].ts=a[i].bs+a[i].hr;

    }
     r=count(a,N);
    printf("%d employee total salary more than 50000: \n",r);
    t=oldest(a,N);
    printf("Oldest employee's ID: %d : ",t);

}

int count(employee a[],int n)
{
    int c=0,i;
    for(i=0; i<n; i++)
    {
        if(a[i].ts>50000)
            c++;
    }
    return c;
}
int oldest(employee a[],int N)
{
    int i,x,max;
    max=a[0].age;
    for(i=0; i<N; i++)
    {
        if(a[i].age>max)
        {
             max=a[i].age;
             x=a[i].id;
        }

    }

    return x;
}
