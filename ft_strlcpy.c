/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 13:45:02 by adiaz-lo          #+#    #+#             */
/*   Updated: 2020/01/13 09:08:33 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function copies 'dstsize' of the string 'src' into 'dst' and returns
** the total length of the result string.
*/

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	int				counter;

	if (!src)
		return (0);
	counter = (unsigned int)ft_strlen(src);
	if (!dstsize)
		return (counter);
	i = 0;
	while (src[i] && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (counter);
}
