/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:18:21 by adiaz-lo          #+#    #+#             */
/*   Updated: 2020/01/14 09:42:38 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Function that converts a received as a parameter string to a integer
** For further information, please check the Standard C Library function
** 'atoi(const char *str)'
*/

#include "libft.h"

/*
** This auxiliar function checks if the character received by parameter is a
** space or not.
** For further information, please check the Standard C Library function
** 'isspace(int c)'.
*/

static int	ft_isspace(int c)
{
	if (c == '\v' || c == '\n' || c == '\t' ||
		c == '\r' || c == '\f' || c == ' ')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int		sign;
	int		result;

	sign = 1;
	result = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		result = result * 10 + (*str++ - 48);
	}
	return (result * sign);
}
