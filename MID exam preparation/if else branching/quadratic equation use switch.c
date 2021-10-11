main()
{
    float d,a,b,c,x1,x2;
    printf("Enter the value of a,b and c: ");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;

    switch(d>=0)
    {
    case 1:
        {
            x1=(-b+sqrt(d))/2*a;
            x2=(-b-sqrt(d))/2*a;
            printf("x1=%.2f and x2=%.2f",x1,x2);
            break;
        }
    case 0:
         {
             printf("Imaginary ");
         }

    }
}
