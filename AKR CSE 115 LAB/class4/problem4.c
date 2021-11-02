
main()
{
    int amount,discount;
    printf("Enter your amount: ");
    scanf("%d",&amount);

    if(amount<=5000)
        discount=amount*0.05;
     else if(amount<=10000)
     {

        discount=amount*.05;
        discount=discount+(amount-5000)*(0.1);

     }
  else{

    discount=5000*0.05;
    discount=discount+(5000*0.1);
    discount=discount+((amount-10000)*0.2);
  }
   printf("Purchase amount is %d",amount-discount);

   return 0;
}
