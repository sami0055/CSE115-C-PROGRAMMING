#include<stdio.h>
typedef struct
{
    char n[50];
    int id;
    float m;
    char g;

}student;
char findGrade(student s);
int main()
{
    student s[5];
    int i;
    for(i=0; i<5; i++)
    {
        printf("Name: ");
        gets(s[i].n);
        printf("ID: ");
        scanf("%d",&s[i].id);
        printf("Mark: ");
        scanf("%f",&s[i].m);
        char r=findGrade(s[i]);
        printf("%d %.2f %c \n",s[i].id,s[i].m,r);
        scanf("%*c");
    }
}
char findGrade(student s)
{
    char g;
    if(s.m>=90)
        g='A';
    else if(s.m>=80)
        g='B';
    else if(s.m>=70)
        g='C';
    else if(s.m>=60)
        g='D';
    else
        g='F';
    return g;
}
