main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);

    switch(ch)
    {
    case 't':
        printf("It is t");
        break;
    case 'h':
        printf("It is h");
        break;
    case 'T':
        printf("IT is T");
        break;
    case 'H':
        printf("it is H");
        break;

    default:
        printf("something different");
    }
}
