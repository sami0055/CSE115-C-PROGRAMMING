#include<stdio.h>
#include<stdlib.h>
int isEven(const int num);
int isprime(const int num);
int main()
{
    FILE *fptrn,*fptreven,*fptrodd,*fptrprime;
    int num;
    fptrn=fopen("num.txt","r");
    fptreven=fopen("even.txt","w");
    fptrprime=fopen("prime.txt","w");
    fptrodd=fopen("odd.txt","w");
    if(fptrn==NULL || fptreven==NULL || fptrodd==NULL || fptrprime==NULL)
    {
        printf("Error");
        return;
    }
    while(fscanf(fptrn,"%d",&num)!=-1)
    {
        if(isprime(num))
            fprintf(fptrprime,"%d\n",num);
        else if(isEven(num))
            fprintf(fptreven,"%d\n",num);
         else if(isodd(num))
            fprintf(fptrodd,"%d\n",num);
    }
    fclose(fptrn);
    fclose(fptreven);
    fclose(fptrodd);
    fclose(fptrprime);
    return 0;


}

int isEven(const int num)
{
    if(num%2==0)
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
int isodd(const int num)
{
    if(num%2!=0)
        return 1;
}
