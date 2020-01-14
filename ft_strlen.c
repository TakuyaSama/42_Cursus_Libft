/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 11:54:28 by adiaz-lo          #+#    #+#             */
/*   Updated: 2020/01/14 09:27:36 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function returns the length of a string.
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t lenght;

	lenght = 0;
	while (*s++)
	{
		lenght++;
	}
	return (lenght);
}
