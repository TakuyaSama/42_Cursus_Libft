/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 10:14:54 by adiaz-lo          #+#    #+#             */
/*   Updated: 2020/01/13 10:34:36 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function checks if 'c' is a printable character.
** For further information, please check the Standard C Library function
** 'isprint(int c))'
*/

#include "libft.h"

int		ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
