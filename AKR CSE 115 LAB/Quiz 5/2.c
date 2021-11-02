
#include<stdio.h>
typedef struct
{
    int ID;
    int AGE;
    int basic_s;
    int House_r;
    int Total_s;
}nsu_employee;
int countemployee(nsu_employee s[],int N);
int oldestemployee(nsu_employee s[],int N);
int main()
{
    int N,i,result,t;
    printf("Employee num?");
    scanf("%d",&N);
     nsu_employee s[N];
    for(i=0; i<N; i++)
    {
        printf("Enter ID for %d employee: ",i+1);
        scanf("%d",&s[i].ID);
        printf("Enter Age for %d employee: ",i+1);
        scanf("%d",&s[i].AGE);
        printf("Enter basic salary: ");
        scanf("%d",&s[i].basic_s);
        printf("Enter house rent allowance :");
        scanf("%d",&s[i].House_r);
        s[i].Total_s=s[i].basic_s+s[i].House_r;

    }
     result=countemployee(s,N);
    printf("%d employee total salary more than 50000: \n",result);
    t=oldestemployee(s,N);
    printf("Oldest employee's ID: %d",t);

}

int countemployee(nsu_employee s[],int N)
{
    int count=0,i;
    for(i=0; i<N; i++)
    {
        if(s[i].Total_s>50000)
            count++;
    }
    return count;
}
int oldestemployee(nsu_employee s[],int N)
{
    int i,r,m;
    m=s[0].AGE;
    for(i=0; i<N; i++)
    {
        if(s[i].AGE>m)
        {
             m=s[i].AGE;
             r=s[i].ID;
        }

    }

    return r;
}
