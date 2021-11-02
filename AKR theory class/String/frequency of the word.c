#include<stdio.h>
int main()
{
    int len,i,fr=0,t,h,e;
    char spc,a[100];
    fgets(a,sizeof a,stdin);

    len=strlen(a);
    for(i=0; i<=len-3; i++)
    {
       t=(a[i]=='t'||a[i]=='T');
		h=(a[i+1]=='h'||a[i+1]=='H');
		e=(a[i+2]=='e'||a[i+2]=='E');
		spc=(a[i+3]==' '||a[i+3]=='\0');
		if ((t&&h&&e&&spc)==1)
		   fr++;

}
printf("%d",fr);

}

