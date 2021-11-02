
 main() {
  int a,b,c,gcd,min;
  printf("Enter the vlaue of a b and c  : ");
  scanf("%d%d%d",&a,&b,&c);

  min=a<b?(a<c?a:c):(b<c?b:c);
  for (gcd=min;gcd>=1;gcd--) 	{
    if (a%gcd==0 && b%gcd==0 && c%gcd==0)
      break;
  }
  printf("%d",gcd); return 0;

}
