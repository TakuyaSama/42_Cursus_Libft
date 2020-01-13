/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 10:50:25 by adiaz-lo          #+#    #+#             */
/*   Updated: 2020/01/13 10:56:47 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function allocates (with malloc(3)) and returns a new string, result of
** the concatenation of s1 and s2.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;

	if (!s1 || !s2)
		return (0);
	if (!(s3 = (char*)malloc(sizeof(*s3) * (ft_strlen(s1) +
						ft_strlen(s2) + 1))))
		return (0);
	i = 0;
	while (*s1)
		s3[i++] = *s1++;
	while (*s2)
		s3[i++] = *s2++;
	s3[i] = 0;
	return (s3);
}
