#include<stdio.h>
int main()
{
    int i,ch=0,sl=0,cp=0,sym=0,x=0;
    char arr[150];
    printf("Input your password!");

    gets(arr);
    int len=strlen(arr);

    for(i=0; i<len; i++)
    {
        ch++;
        if(arr[i] >= 'a' && arr[i] <= 'z')
        {
            sl++;
        }
        else if(arr[i] >= 'A' && arr[i] <= 'Z')
        {
            cp++;
        }
        else if(arr[i] >= '0' && arr[i] <= '9')
        {
            x++;
        }
        else
        {
            sym++;
        }
    }
    if(ch>=6 && cp>=1 && sl>=1 && (x>=1 || sym>=1))
    {
        printf("VALID PASSWORD");
    }
    else
    {
        printf("Your password is invalid");
    }
    return 0;
}
