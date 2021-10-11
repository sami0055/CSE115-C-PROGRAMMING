#include<stdio.h>
#include<conio.h>
    int add(int n);
    int  main()
    {
      int n, ans;

      printf("Enter Number:");
      scanf("%d", &n);
      if(n<=5)
      {
      printf("Enter Number:");
      scanf("%d", &n);
      }
      ans = add(n);
      printf("%d", ans);
    }

    int add(int n)
    {
        int sum=5;
      if (n==5)
      {
        return sum;
      }
      else {
        sum=n+add(n-1);

      }
      return sum;
    }
