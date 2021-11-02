#include<stdio.h>
int main()
{
    float distance,meters,feet,inch,centimeter;
    printf("Enter the distance between two city in KM: ");
    scanf("%f",&distance);

    meters=distance*1000;
    feet=meters*3.28;
    inch=feet*12;
    centimeter=meters*100;

    printf("Meters:%.2f\n",meters);
    printf("Feet:%.2f\n",feet);
    printf("inch: %.2f\n",inch);
    printf("centimeters:%.2f",centimeter);
}
