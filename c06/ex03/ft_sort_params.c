/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 15:59:44 by ajafy             #+#    #+#             */
/*   Updated: 2021/07/12 14:20:58 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] || s2[j])
	{
		if (s1[i] > s2[j] || i > j)
			return (s1[i] - s2[j]);
		else if (s1[i] < s2[j] || i < j)
			return (s1[i] - s2[j]);
		i++;
		j++;
	}
	return (s1[i] - s2[j]);
}

void	ft_rev(int ac, char**av)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	j = 1;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_strcmp(av[i], av[j]) > 0)
			{
				temp = av[i];
				av[i] = av[j];
				av[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char**av)
{
	char	c;
	int		i;
	int		j;

	j = 1;
	ft_rev(ac, av);
	while (j < ac)
	{
		i = 0;
		while (av[j][i])
		{
			c = av[j][i];
			write(1, &c, 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}
