main()
{
    float a,b,c,root1,root2,imaginary,D;
    printf("Enter the value of a,b,c of quadratic equation: ");
    scanf("%f%f%f",&a,&b,&c);

    D=(b*b)-(4*a*c);

    switch(D>0)
    {
    case 1:
        root1=(-b+sqrt(D))/(2*a);
        root2=(-b-sqrt(D))/(2*a);

        printf("root1=%f and root2=%f",root1,root2);
        break;

    case 0:
        switch(D<0)
        {
        case 1:
            root1=root2=-b/(2*a);
            imaginary=sqrt(-D)/(2*a);
            printf("%.2f+i%.2f and %.2f+i%.2f",root1,imaginary,root2,imaginary);
            break;
        case 0:
            root1=root2=-b/(2*a);
            printf("%.2f and %.2f",root1,root2);
            break;

    }
}
}
