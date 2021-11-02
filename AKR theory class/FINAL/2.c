int main()
{
    int n,i,sum=0;
    printf("Enter the num of array elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2)
            sum=sum+a[i];
    }
    printf("The summation of odd integers is: %d\n",sum);
    return 0;
}
