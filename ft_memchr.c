/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 13:21:00 by adiaz-lo          #+#    #+#             */
/*   Updated: 2020/01/13 09:33:19 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function scans the first 'n' bytes of 's' for the first occurrence of
** 'c'.
** For further information, please check the Standard C Library function
** 'memchr(const void *s, int c, size_t n)'
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return ((void *)str + i);
		i++;
	}
	return (0);
}
