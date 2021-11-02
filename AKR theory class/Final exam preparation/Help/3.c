#include<stdio.h>
typedef struct
{
    char name[100];
    int id;
    int cn;
    char dn[100];
    float cb;

}patient_info;
int main()
{
    patient_info a[2];
    int i;
    for(i=0; i<2; i++)
    {
        printf("Name: ");
        gets(a[i].name);
        printf("ID: ");
        scanf("%d",&a[i].id);
        printf("Cabin no: ");
        scanf("%d",&a[i].cb);
        printf()
    }
}
