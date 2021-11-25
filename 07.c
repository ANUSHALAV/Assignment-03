main()
{
	int num,i;
	printf("enter the number = ");
	scanf("%d",&num);
	num*=2;
	i=2;
	while(i<=num)
	{
		if(i%2==0)
		printf("%d,",i);
		i++;
	}
getch();
}
