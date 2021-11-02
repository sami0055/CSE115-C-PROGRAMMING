main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);

    if((ch>='A' && ch<='Z'))
    {
          printf("Upper case latter");

    }

    else if (ch>='a' && ch<='z')
    {
          printf("Lower case latter");
    }

    else
        printf("special character");
}
