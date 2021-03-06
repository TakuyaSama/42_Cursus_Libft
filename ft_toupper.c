/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 09:11:56 by adiaz-lo          #+#    #+#             */
/*   Updated: 2020/01/13 09:12:43 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function checks if the 'c' is a lowercase alphabetical character and if
** that's the case, then it converts it to uppercase, otherwise, it leaves
** unchanged
** For further information, please check the Standard C Library Function
** 'toupper(int c)'
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
