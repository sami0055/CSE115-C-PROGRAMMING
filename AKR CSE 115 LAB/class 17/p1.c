#include<stdio.h>
typedef struct
{
    int id;
    int mark[3];

} student;
int main()
{
    int i,sum=0;
    student s1;
    printf("Enter student id number:\n");
    scanf("%d",&s1.id);
    for(i=0; i<3; i++)
    {
        printf("Enter mark for sum %d",i+1);
        scanf("%d",&s1.mark[i]);
    }
    for(i=0; i<3; i++)
    {
        sum=sum+s1.mark[i];
    }
    printf("Total mark is %d \n",sum);
   int max=s1.mark[0];
    for(i=1; i<3; i++)
    {
        if(max<s1.mark[i])
            max=s1.mark[i];
    }
    printf("Highest mark is %d ",max);
}
