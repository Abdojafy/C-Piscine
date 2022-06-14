/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 10:04:50 by ajafy             #+#    #+#             */
/*   Updated: 2021/07/14 17:15:35 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
int	ft_strlen(char *str)
{
	int	len ;

	len = 0 ;
	while (str [len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*memoire;
	int		i;
	int		len;

	i = 0;
	memoire = NULL;
	len = ft_strlen(src);
	memoire = malloc(len * sizeof(src));
	if (memoire == NULL)
	{
		return (NULL);
	}
	while (src[i])
	{
		memoire[i] = src[i];
		i++;
	}
	memoire[i] = '\0';
	return (memoire);
}
