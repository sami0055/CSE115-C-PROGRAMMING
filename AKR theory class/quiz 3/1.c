#include<stdio.h>
int main()
{

    int i = 0,w1 = 1,w2 = 1,v1 = 0,v2 = 0,c1 = 0,c2 = 0;
    char str1[100];
    char str2[100];
    gets(str1);
    gets(str2);
    while(str1[i] != '\0')
    {
        if (str1[i] == ' ' && str1[i+1] != ' ')
            w1++;
        i++;
    }
    i=0;
    while(str2[i] != '\0')
    {
        if (str2[i] == ' ' && str2[i+1] != ' ')
            w2++;
        i++;

    }
    i=0;
    while (str1[i] != '\0')
    {
        if((str1[i]>=65 && str1[i]<=90)|| (str1[i]>=97 && str1[i]<=122))
        {
            if (str1[i] == 'A' ||str1[i] == 'E' || str1[i] == 'I' || str1[i] == 'O'
                || str1[i] == 'U' || str1[i] == 'a' || str1[i] =='e' || str1[i]=='i' || str1[i] == 'o' || str1[i] == 'u')
                v1++;
            else
                c1++;
        }
        i++;
    }
    i=0;
    while (str2[i] != '\0')
    {
        if((str2[i]>=65 && str2[i]<=90)|| (str2[i]>=97 && str2[i]<=122))
        {
            if (str2[i] == 'A' ||str2[i] == 'E' || str2[i] == 'I' || str2[i] == 'O' || str2[i] == 'U' ||str2[i] == 'a' || str2[i] =='e' || str2[i]=='i' || str2[i] == 'o'
                || str2[i] == 'u')
                v2++;
            else
                c2++;
        }
        i++;
    }
    if( v1 == v2 && c1 == c2 && w1 == w2 )
    {
        printf("YES");
    }
    else
        printf("NO");

    return 0;
}
