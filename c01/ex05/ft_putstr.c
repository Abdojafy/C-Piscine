/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 11:04:51 by ajafy             #+#    #+#             */
/*   Updated: 2021/06/28 12:34:35 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	ft_putstr(char *str)
{
	int	i ;

	i = 0 ;
	while (str [i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}