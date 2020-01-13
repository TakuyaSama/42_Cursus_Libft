/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 08:59:33 by adiaz-lo          #+#    #+#             */
/*   Updated: 2020/01/13 10:34:07 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function checks if 'c' parameter is an ASCII character.
** For further information, please check the Standard C Library function
** isascii(int c).
*/

#include "libft.h"

int		ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
