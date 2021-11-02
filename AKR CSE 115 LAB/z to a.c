
#include<stdio.h>
int main()
{
  char ch;
  printf("Enter any character: ");
  scanf("%c",&ch);


  if(ch=='Z')
  {
      ch=ch-25;
      printf("%c",ch);

  }

  else
    printf("%c",ch+1);
}
