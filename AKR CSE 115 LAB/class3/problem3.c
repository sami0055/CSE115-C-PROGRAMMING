#include<stdio.h>
int main()
{
    float mark1,mark2,mark3,total,Average,percentage;
    printf("Enter the value of mark1: ");
    scanf("%f",&mark1);
    printf("Enter the value of mark2: ");

    scanf("%f",&mark2);
    printf("Enter the value of mark3: ");

    scanf("%f",&mark3);
    total=mark1+mark2+mark3;
    Average=total/3;
    percentage=(total/300)*100;

    printf("Enter subject 1 mark : %.1f\n",mark1);
    printf("Enter subject 2 mark : %.1f\n",mark2);
    printf("Enter subject 3 mark : %.1f\n",mark3);

    printf("The total is %.1f+%.1f+%.1f=%.0f\n",mark1,mark2,mark3,total);
    printf("Average is %.2f\n",Average);
    printf("Percentage is  %.2f%%",percentage);
    return 0;


}
