#include<stdio.h>
int main()
{
    int mark;
    char g;
    printf("Please enter your marks : ");
    scanf("%d",&mark);

    if(mark>=90)
        g='A';
        else if(mark>=80)
            g='B';
             else if (mark>=70)
            g='C';
             else if(mark>=60)
            g='D';


        else
            g='F';
        printf("Your grade is %c",g);
}
