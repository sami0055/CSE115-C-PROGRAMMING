main()
{
    int ch;
    printf("Enter character t h or t ");
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
        printf("it is T");
        break;
    default:
        printf("Something different");
    }
}
