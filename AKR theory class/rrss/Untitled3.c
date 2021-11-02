
#include<stdio.h>
#include<stdlib.h>
int isComposite(const int num);
int isprime(const int num);
int main()
{
    FILE *fptrn,*fptrcomposite,*fptrprime;
    int num,n;
    fptrn=fopen("num.txt","w");
    fptrcomposite=fopen("composite.txt","w");
    fptrprime=fopen("prime.txt","w");
    if(fptrn==NULL || fptrcomposite==NULL || fptrprime==NULL)
    {
        printf("Error");
        return;
    }
     while(num!=-1)
    {
        scanf("%d",&num);
        fprintf(fptrn,"%d",num);
    }

    while(fscanf(fptrn,"%d",&num)!=-1)
    {
        if(isprime(num))
            fprintf(fptrprime,"%d\n",num);
        else if(isComposite(num))
            fprintf(fptrcomposite,"%d\n",num);
    }
    fclose(fptrn);
    fclose(fptrcomposite);
    fclose(fptrprime);
    return 0;


}

int isComposite(const int num)
{
     int i,c=0;
    if(num<0)
        return 0;
    for(i=1; i<=num; i++)
    {
        if(num%i==0)
            c++;
    }
    if(c==0)
    return 1;
}
int isprime(const int num)
{
    int i;
    if(num<0)
        return 0;
    for(i=2; i<=num/2; i++)
    {
        if(num%i==0)
            return 0;
    }
    return 1;
}

