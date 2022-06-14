int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 2147483647)
	{
		return (1);
	}
	if (nb == 0 || nb == 1)
	{
		return (0);
	}
	while (i <= nb)
	{
		if (nb % i == 0 && (i < nb))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	j;

	if (nb < 0)
	{
		return (2);
	}
	i = 0;
	j = ft_is_prime(nb);
	if (j == 1)
	{
		return (nb);
	}
	nb += 1;
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}
