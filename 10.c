main()
{
	int num;
	printf("enter the number = ");
	scanf("%d",&num);
	printf("odd numbers in reverse = ");
	num*=2;
	while(num)
	{
		if(num%2!=0)
		printf("%d,",num);
		num--;
	}
getch();
}
