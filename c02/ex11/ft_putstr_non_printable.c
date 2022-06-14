/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:16:28 by ajafy             #+#    #+#             */
/*   Updated: 2021/07/05 12:08:52 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void	ft_remp_tab(char *tab)
{
	int		j;
	char	c;

	c = 'a';
	j = 0;
	while (j <= 15)
	{
		if (j < 10)
		{
			tab[j] = j + '0';
		}
		else
		{
			tab[j] = c;
			c++;
		}
		j++;
	}
}

void	ft_print(char *str, int i)
{
	char	tab[16];
	int		p;
	char	c ;

	ft_remp_tab(tab);
	write(1, "\\", 1);
	p = str[i] / 16;
	c = tab[p];
	write(1, &c, 1);
	p = str[i] % 16 ;
	c = tab[p];
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	c ;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 && str[i] > 0)
		{
			ft_print(str, i);
		}
		else
		{
			c = str[i];
			write(1, &c, 1);
		}
		i++;
	}
}
