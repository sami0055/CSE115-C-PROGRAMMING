#include<stdio.h>
int main()
{
    int i,n;
    float *element;
    printf("Input total number of element: \n");
    scanf("%d",&n);
    element=(float*)calloc(n,sizeof(float));
    if(element==NULL)
    {
        printf("No memory is allocated ");
        exit(0);
    }
    printf("\n");

    for(i=0; i<n; i++)
    {
        scanf("%f",(element+i));
    }
    for(i=1; i<n; i++)
    {
        if(*element<*(element+i))
        {
            *element=*(element+i);
        }
    }
    printf("The largest element is %.2f",*element);
    free(element);
}
