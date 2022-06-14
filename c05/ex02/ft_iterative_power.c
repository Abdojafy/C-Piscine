int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	a;

	i = 1;
	a = 1;
	if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	while (i <= power)
	{
		a *= nb;
		i++;
	}
	return (a);
}
