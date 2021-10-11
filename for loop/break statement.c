main(	)	{
int i;
double	number,	sum	=	0.0;
for(i=1;	i	<=	10;	++i)	{
	 	printf("Enter	n%d:	",i);
	 	scanf("%lf",	&number);
//	If	user	enters	negative	number,	loop	is	terminated
	 	if(number	<	0.0)	{
			break;
	 	}
	 	sum	+=	number;
}
printf("Sum	=	%.2lf",sum);
}
