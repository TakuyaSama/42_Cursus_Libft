/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 09:46:05 by adiaz-lo          #+#    #+#             */
/*   Updated: 2020/01/13 09:49:59 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copies 'n' bytes from memory area 'src' to memory of 'dst'.
** For further information, please check the Standard C Library function
** 'memcpy(void *dst, const void *src, size_t n)'
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*source;
	char	*dest;

	source = (char *)src;
	dest = (char *)dst;
	if (!dst && !src)
		return (dst);
	while (n--)
		*dest++ = *source++;
	return (dst);
}
