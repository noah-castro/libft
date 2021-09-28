
int	main()
{
	char a[8] = "abcdefg";
	int i = 0;
	int n = 8;
	while (i < n)
	{
		printf("%c", a[i]);
		i++;
	}

	ft_memset(a, '$', 3);

	i = 0;
	n = 8;

	while (i < n)
	{
		printf("%c", a[i]);
		i++;
	}
}
