/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 10:08:43 by ajafy             #+#    #+#             */
/*   Updated: 2021/06/27 15:43:13 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	ft_print( int i, int j, int k)
{
	char	a ;

	a = i + '0' ;
	write(1, &a, 1);
	a = j + '0' ;
	write(1, &a, 1);
	a = k + '0' ;
	write(1, &a, 1);
	if (i != 7 || j != 8 || k != 9)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int		i ;
	int		j ;
	int		k ;

	i = 0 ;
	while (i <= 7)
	{
		j = i + 1 ;
		while (j <= 8)
		{
			k = j + 1 ;
			while (k <= 9)
			{
				ft_print(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
