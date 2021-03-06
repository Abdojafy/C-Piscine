/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 13:51:38 by ajafy             #+#    #+#             */
/*   Updated: 2021/07/06 11:57:53 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
