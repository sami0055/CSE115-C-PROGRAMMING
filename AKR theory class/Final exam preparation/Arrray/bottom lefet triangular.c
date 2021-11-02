int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter Matrix:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Bottom Left Triangle:\n");
    for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){

            if(j<=i)
                printf("%d ", matrix[i][j]);

        }
        printf("\n");
    }

    return 0;
}
