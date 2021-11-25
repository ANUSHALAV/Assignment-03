main()
{
	int num,i;
	printf("enter the number = ");
	scanf("%d",&num);
	printf("odd numbers is = ");
	num*=2;
	i=1;
	while(i<=num)
	{
		if(num%2!=0)
		printf("%d,",i);
		i++;
	}
getch();
}
