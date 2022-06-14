/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 15:39:53 by ajafy             #+#    #+#             */
/*   Updated: 2021/07/05 18:03:21 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_put(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	s;
	unsigned int	i;

	s = 0 ;
	i = 0 ;
	while (src[s] != '\0')
	{
		s++;
	}
	if (s < size)
	{
		ft_put(dest, src);
	}
	else
	{
		while (i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (s);
}
