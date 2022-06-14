/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 12:21:22 by ajafy             #+#    #+#             */
/*   Updated: 2021/07/05 10:17:05 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] < 123 && str[i] > 96)
		{
			if (i == 0 || str[i - 1] < 48
				|| (str[i - 1] > 57 && str[i - 1] < 65)
				|| (str[i - 1] > 90 && str[i - 1] < 97)
				|| (str[i - 1] > 122))
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}
