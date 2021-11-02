main()
{
     int i;
    char a[5];
    printf("Enter five character: ");
    for(i=0; i<5; i++)
    {
        scanf("%c",&a[i]);
        getchar();
    }
    printf("ASCCI values: %d,%d\n",a[1],a[2]);
    if(a[5]=='a'||a[5]=='e'||a[5]=='i'||a[5]=='u'||a[5]=='A'||a[5]=='E'||a[5]=='I'||a[5]=='O'||a[5]=='U')
     printf("Last element is vowel\n");
     else
        printf("Last element is consonant \n");

        printf("Printing elements: %c %c %c %c %c\n",a[2],a[0],a[1],a[4],a[3]);

}
