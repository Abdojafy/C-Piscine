int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	if (nb == 0)
	{
		return (1);
	}
	if (nb > 0)
	{
		i = 1;
		fact = 1;
		while (i <= nb)
		{
			fact = fact * i;
			i++;
		}
		return (fact);
	}
	return (0);
}
