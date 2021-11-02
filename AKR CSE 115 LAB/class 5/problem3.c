#include<math.h>

main()
{
    float a,b,c,d,root_1,root_2;
    printf("Enter the value of quadratic euations value a,b,c: " );
    scanf("%f%f%f",&a,&b,&c);

    d=(b*b)-(4*a*c);

    if(d>0)
    {
        root_1=(-b+sqrt(d))/(2*a);
        root_2=(-b-sqrt(d))/(2*a);

        printf("Root_1: %.2f\n",root_1);
        printf("Root_2: %.2f",root_2);
    }
    else if(d==0)
    {
        root_1=root_2=-b/(2*a);
        printf("Root_1 and Root_2 are equal:%.2f and %.2f",root_1,root_2);
    }
    else if(d<0)
    {
        printf("Imaginary root");
    }


    }
