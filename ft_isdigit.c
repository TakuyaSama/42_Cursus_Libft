/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 09:25:04 by adiaz-lo          #+#    #+#             */
/*   Updated: 2020/01/13 09:27:38 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Function that checks if 'c' is a digit (0 through 9)
** For further information, please check the Standard C Library function
** 'isdigit(int c)'
*/

#include "libft.h"

int		ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
