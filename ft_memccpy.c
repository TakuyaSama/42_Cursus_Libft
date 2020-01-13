/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 12:19:59 by adiaz-lo          #+#    #+#             */
/*   Updated: 2020/01/13 12:56:25 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function copies 'n' bytes from the memory of 'src' to the memory of
** 'dst'.
** It stops when a 'c' character is found.
** For further information, please check the Standard C Library function
** 'memccpy(void *dst, const void *src, int c, size_t n)'.
*/

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*source;
	char	*destiny;
	size_t	i;

	source = (char *)src;
	destiny = (char *)dst;
	i = 0;
	while (i < n)
	{
		destiny[i] = source[i];
		if (source[i] == (char)c || destiny[i] == (char)c)
		{
			return (dst + (++i));
		}
		i++;
	}
	return (NULL);
}
