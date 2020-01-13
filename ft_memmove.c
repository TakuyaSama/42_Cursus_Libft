/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 10:58:49 by adiaz-lo          #+#    #+#             */
/*   Updated: 2020/01/13 09:43:22 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function copies "n" bytes from the memory of "src" to "dest".
** Memories may overlap.
** First, the bytes in "src" are copied into a temporary array and then to
** "dest".
** For further information, please check the Standard C Library function
** 'memmove(void *dst, const void *src, size_t n)'
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char *tmp;
	char *dest;

	tmp = (char *)src;
	dest = (char *)dst;
	if (tmp < dest)
	{
		while (n--)
			dest[n] = tmp[n];
	}
	else
		ft_memcpy(dest, tmp, n);
	return (dst);
}
