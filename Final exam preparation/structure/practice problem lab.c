#include<stdio.h>
typedef struct
{
    int ID;
    int Mark[3];
}Student;
int main()
{
    Student s1;
    int i,sum=0;
    printf("Enter student ID number: ");
    scanf("%d",&s1.ID);
    for(i=0; i<3; i++)
    {
        printf("Enter mark for %d sub ",i+1);
        scanf("%d",&s1.Mark[i]);
    }
    for(i=0; i<3; i++)
    {
        sum=sum+s1.Mark[i];
    }
    printf("Total mark is %d \n",sum);
    int max=s1.Mark[0];
    for(i=0; i<3; i++)
    {
        if(max<s1.Mark[i])
            max=s1.Mark[i];
    }
    printf("Highest mark is %d ",max);

}
