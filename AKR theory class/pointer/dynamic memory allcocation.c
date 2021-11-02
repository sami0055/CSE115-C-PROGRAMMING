#include<stdio.h>
int main()
{
    int *p,N,i;
    printf("How many students?\n");
    scanf("%d",&N);
    p=malloc(N*4);
    for(i=0; i<N; i++)
    {
       scanf("%d",p+i);
    }
    for(i=0; i<N; i++)
    {
        printf("%d\n",*(p+i));

    }
    free(p);



}
