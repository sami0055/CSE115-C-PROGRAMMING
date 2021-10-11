main(	)	{
int i;
double	number,	sum	=	0.0;
for(i=1;	i	<=	10;	++i)	{
	 	printf("	Enter	n%d:	",	i);
	 	scanf("%lf",	&number);
//	If	user	enters	negative	number,	skip	it
	 	if(number	<	0.0)	{
			continue;
	 	}
	 	sum	+=	number;
}
    printf("Sum	=	%.2lf",sum);


}
