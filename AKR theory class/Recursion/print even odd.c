#include<stdio.h>
int main()
{
  int lowerlimit,upperlimit;
  printf("Enter lower limit: ");
  scanf("%d",&lowerlimit);
  printf("Enter upper limit: ");
  scanf("%d",&upperlimit);
  printf("Print even of odd from %d to %d ",lowerlimit,upperlimit);
  printevenodd(lowerlimit,upperlimit);
  return 0;

}
void printevenodd(int cur,int limit)
{
    if(cur>limit)
        return;
    printf("%d ,",cur);
    printevenodd(cur+2,limit);

}
