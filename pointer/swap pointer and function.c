int main()
{
    int x=10,y=20;
    printf("Before swapping x=%d and y=%d\n",x,y);
    swap(&x,&y);
    printf("After swapping x=%d and y=%d",x,y);
}

void swap(int *p1,int *p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;


}
