/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 18:26:11 by ajafy             #+#    #+#             */
/*   Updated: 2021/07/15 11:21:40 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		range[0] = NULL;
		return (0);
	}
	range[0] = malloc(size * sizeof(int));
	if (range[0] == NULL)
		return (-1);
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (size);
}
