/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:18:21 by adiaz-lo          #+#    #+#             */
/*   Updated: 2020/01/13 09:27:25 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Function that converts a received as a parameter string to a integer
** For further information, please check the Standard C Library function
** 'atoi(const char *str)'
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	int		result;

	sign = 1;
	result = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f'
			|| *str == '\r' || *str == ' ')
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '+' || *str == '-')
		str++;
	while (ft_isdigit(*str))
	{
		result = result * 10 + (*str++ - 48);
	}
	return (result * sign);
}
