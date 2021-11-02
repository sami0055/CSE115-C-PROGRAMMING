main()
{
    int i1,f1,i2,f2,diff;
    printf("First person: \n");
    printf("Enter feet  : ");
    scanf("%d",&f1);
    printf("Enter inch: ");
    scanf("%d",&i1);
    printf("Second person: \n");
    printf("Enter feet: ");
    scanf("%d",&f2);
    printf("Enter inch: ");
    scanf("%d",&i2);

    diff=(f1*12+i1)-(f2*12+i2);
    printf("Difference: %d feet %d inch",diff/12,diff%12);
}
