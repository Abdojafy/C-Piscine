/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 13:08:28 by ajafy             #+#    #+#             */
/*   Updated: 2021/07/10 10:33:53 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i <= n)
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else if (s1[i] < s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		else if (s1[i] > s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	int				j;
	int				k;

	i = 0;
	j = 0;
	k = 0;
	while (to_find[i] != '\0')
	{
		i++;
	}
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[j] != '\0')
	{
		if ((str[j] == to_find[k])
			&& (ft_strncmp(to_find, str + j, i - 1) == 0))
		{
			return (str + j);
		}
		j++;
	}
	return (0);
}
