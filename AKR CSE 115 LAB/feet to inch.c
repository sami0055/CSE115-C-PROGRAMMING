#include<stdio.h>
int main()
{
float height_in_feet,height_in_inch;
printf("Enter the value of feet: ");
scanf("%f",&height_in_feet);
height_in_inch=height_in_feet*12;

printf("inch=%.2f",height_in_inch);

return 0;
}
