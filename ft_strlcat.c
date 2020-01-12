/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 12:06:12 by adiaz-lo          #+#    #+#             */
/*   Updated: 2019/11/20 12:07:22 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function concatenates 2 strings received by parameter, adding 'src' to
'dst', limiting the result string size.
'dst' must have enough slots for the elements of 'src'.
The return value is the length of the generated string.
*/

#include "libft.h"

size_t	*ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	j;
	size_t	length;

	length = ft_strlen(dst);
	if (size > 0 && size > length)
	{
		i = length;
		j = 0;
		while (src[j] && i < (int)size - 1)
		{
			dst[i] = src [j];
			i++;
			j++;
		}
		dst[i] = '\0';
		return (length + ft_strlen(src));
	}
	return (size + ft_strlen(src));
}
