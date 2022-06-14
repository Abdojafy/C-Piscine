/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 11:22:58 by ajafy             #+#    #+#             */
/*   Updated: 2021/07/15 12:04:35 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*st;
	int		i;
	int		len;

	len = 0;
	i = 0;
	if (size <= 0)
	{
		st = (char *) malloc(sizeof(char));
		st[0] = '\0';
		return (st);
	}
	while (i < size - 1)
		len += ft_strlen(strs[i++]) + ft_strlen(sep);
	len += ft_strlen(strs[i]);
	st = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	st[0] = '\0';
	while (i < size - 1)
	{
		ft_strcat(st, strs[i++]);
		ft_strcat(st, sep);
	}
	ft_strcat(st, strs[i]);
	return (st);
}
