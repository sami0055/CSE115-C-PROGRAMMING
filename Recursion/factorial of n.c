int factorial(int n)
{ int r;
   if(n==0)
    r=1;
   else
    r=n*factorial(n-1);
   return r;

}
void main()
{
    int n,x;
    printf("Enter a number for factorial\n");
    scanf("%d",&n);
    x=factorial(n);
    printf("Factorial is %d ",x);
}
