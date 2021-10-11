#include<stdio.h>
int main()
{
    char a[100],word[100];
    printf("Enter the string: ");
    gets(a);
    printf("Enter the word : ");
    gets(word);
    int index=0,i,found=0;
    while(a[index]!='\0')
    {
        if(a[index]==word[0])
        {
            i=0;
            found=1;
            while(word[i]!='\0')
            {
                if(a[index+i]!=word[i])
                {
                    found=0;
                    break;
                }
                i++;
            }
        }
        if(found==1)
            break;
        index++;
    }
    if(found==1)
        printf("%s found at %d index ",word,index);
    else
        printf("%s not found ",word);
}
