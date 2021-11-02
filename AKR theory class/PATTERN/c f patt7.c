main()
{
    int i,j,row,col,central_row,central_col;
    printf("Enter row and col: ");
    scanf("%d%d",&row,&col);

    central_row=(row+1)/2;
    central_col=(col+1)/2;

    for(i=1; i<=row; i++)
    {
        for(j=1; j<=col; j++)
        {
            if(central_col==j || central_row==i)
            {
                printf("0");
            }
            else if(col%2==0 && central_col+1==j)
            printf("0");

           else
            printf("1");
        }
        printf("\n");
    }
return 0;

    }



