/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:16:38 by ajafy             #+#    #+#             */
/*   Updated: 2021/07/14 18:25:11 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	size;

	i = 0;
	size = max - min;
	tab = NULL;
	tab = malloc (size * sizeof(int));
	if ((tab == NULL) || (min >= max))
		return (NULL);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
