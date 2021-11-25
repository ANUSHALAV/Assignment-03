main()
{
	int n,i;
	printf("enter the number = ");
	scanf("%d",&n);
	printf("\nnatural number in reverse order = ");
	i=n;
	while(i>=1)
	{
		printf("%d,",i);
		i--;
	}
getch();
}
