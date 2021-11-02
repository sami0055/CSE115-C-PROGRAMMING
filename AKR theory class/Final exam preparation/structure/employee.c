#include<stdio.h>
typedef struct
{
    int ID;
    int age;
    int salary;
    char dept[10];
}Employee;
int main()
{
    int N,i;
    printf("How many Employee??");
    scanf("%d",&N);
    Employee a[N];
    for(i=0; i<N; i++)
    {
        printf("Enter ID: ");
        scanf("%d",&a[i].ID);
        printf("Enter Age: ");
        scanf("%d",&a[i].age);
        printf("Enter Salary: ");
        scanf("%d%*c",&a[i].salary);
        printf("Enter Department: ");
        gets(a[i].dept);
    }
   int r=countOldem(a,N);
   printf("Here %d old employee\n",r);
   r=Highestsalary(a,N);
   printf("Highest salary given by %d \n",r);
   r=lowestsalary(a,N);
   printf("The person who got lowest salary: \n");
   printf("ID: %d \n",a[r].ID);
   printf("AGE: %d\n",a[r].age);
   printf("Salary: %d\n ",a[r].salary);
   printf("Dept: %s\n",a[r].dept);

}
int countOldem(Employee a[],int N)
{
    int count,i;
    for(i=0; i<N; i++)
    {
        if(a[i].age>50)
            count++;
    }
    return count;
}
int Highestsalary(Employee a[],int N)
{
    int i,max;
    max=a[0].salary;
    for(i=0; i<N; i++)
    {
        if(a[i].salary>max)
            max=a[i].salary;
    }
    return max;
}
int lowestsalary(Employee a[],int N)
{
    int i,min,x;
    min=a[0].salary;
    for(i=0; i<N; i++)
    {
        if(a[i].salary<min)
        {
             min=a[i].salary;
             x=i;
        }
    }
    return x;

}
