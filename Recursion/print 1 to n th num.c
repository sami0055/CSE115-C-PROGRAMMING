#include<stdio.h>
void printNaturalNumbers(int lowerlimit,int upperlimit);
int main()
{
    int lowerlimit,upperlimit;
    printf("Enter lower limit");
    scanf("%d",&lowerlimit);
    printf("Enter upper limit");
    scanf("%d",&upperlimit);
    printf("All natural from %d to %d  ",lowerlimit,upperlimit);
    printNaturalNumbers(lowerlimit,upperlimit);
    return 0;
}
void printNaturalNumbers(int lowerlimit,int upperlimit)
{
    if(lowerlimit>upperlimit)
        return;
    printf("%d,",lowerlimit);
    printNaturalNumbers(lowerlimit+1,upperlimit);
}
