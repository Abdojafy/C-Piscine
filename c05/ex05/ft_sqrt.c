int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 1 || nb == 0)
	{
		return (nb);
	}
	while ((i < nb / 2) && i < 46341)
	{
		if (nb == ft_recursive_power(i, 2))
		{
			return (i);
		}
		i++;
	}
	return (0);
}
