#include<stdio.h>
typedef struct
{
    int id;
    int age;
    int salary;
    char Dpname[3];
}employee;
int oldem(employee a[],int n);
int main()
{
    int n,i;
    printf("How many employee??");
    scanf("%d",&n);
    employee a[n];
    for(i=0; i<n; i++)
    {
        printf("Enter employee for %d id",i+1);
        scanf("%d",&a[i].id);
        printf("Enter age for employee %d \n",i+1);
        scanf("%d",&a[i].age);
        printf("Enter salary for employee %d ",i+1);
        scanf("%d%*c",&a[i].salary);
        printf("Enter Department for %d employee",i+1);
        gets(a[i].Dpname);

    }
    int r=oldem(a,n);
    printf("%d old employee",r);
    r=hsalary(a,n);
    printf("\nHighest salary is %d ",r);
    r=index(a,n);
    printf("\nInformation for who got lowest salary:\n");
    printf("Employee ID: %d \n",a[r].id);
    printf("Employee age : %d \n",a[r].age);
    printf("Employee  salary: %d \n",a[r].salary);
    printf("Department:");
    puts(a[r].Dpname);



}
int oldem(employee a[],int n)
{
    int i,count=0;
    for(i=0; i<n; i++)
    {
        if(a[i].age>50)
        {
            count++;
        }
    }
    return count;
}
int hsalary(employee a[],int n)
{
    int i,max;
    max=a[0].salary;
    for(i=0; i<n; i++)
    {
        if(a[i].salary>max)
            max=a[i].salary;
    }
    return max;
}
int index(employee a[],int n)
{
    int min,i,x;
    min=a[0].salary;
    for(i=0; i<n; i++)
    {
        if(a[i].salary<min)
        {
             min=a[i].salary;
             x=i;
        }

    }

    return x;
}


