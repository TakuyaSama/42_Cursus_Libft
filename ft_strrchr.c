/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 10:01:17 by adiaz-lo          #+#    #+#             */
/*   Updated: 2020/01/13 10:01:43 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function returns a pointer to the first ocurrence of the character
** 'c' in the string 's'. Additionally, it locates the last occurrence of 'c'.
** For further information, please check the Standard C Library function
** 'strrchr(const char *s, int c)'.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;

	str = s;
	while (*s)
		s++;
	if (c == 0)
		return ((char *)s);
	while (s >= str)
	{
		if (*s == c)
			return ((char *)s);
		s--;
	}
	return (0);
}
