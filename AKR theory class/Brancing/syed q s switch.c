main()
{
    int n;
    char ch;
    printf("Enter R for Rice : \n");
    printf("Enter B for Burger: \n");
    printf("Enter D for coffee ,juice of water menu: ");
    scanf("%c",&ch);
    switch(ch)
    {
    case 'R':
        printf("Rice");
        break;
    case 'B':
        printf("Burger");
        break;
    case 'D':
        {
            printf("Enter 1 for coffee: \n");
            printf("Enter 2 for Juice\n");
            printf("Press any number for water: ");
            scanf("%d",&n);
            if(n==1)
            {
                printf("coffee");
            }
            else if(n==2)
            {
                printf("Juice");

            }
            else
            {
                printf("water");
            }
            break;
        }

    }


}
