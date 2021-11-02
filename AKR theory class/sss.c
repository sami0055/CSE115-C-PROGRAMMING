#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    printf("Enter a String: ");
   // fgets(str1,sizeof str1,stdin);
   gets(str1);
    strcpy(str2,str1);
    strrev(str2);
    if(strcmpi(str1,str2)==0)

        printf("%s is Palindrome",str1);

    else

        printf("%s is not palindrome",str1);


    return 0;
}
