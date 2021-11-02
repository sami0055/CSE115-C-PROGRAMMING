int main()
{
    int x=10,y=20,z=40;
    int *p;
    p=&x;
    printf("x = %d\n",*p);
    p=&y;
    printf("y = %d \n",*p);
    p=&z;
    printf("z = %d",*p);
}
