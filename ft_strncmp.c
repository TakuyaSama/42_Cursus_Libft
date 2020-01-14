/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 10:09:54 by adiaz-lo          #+#    #+#             */
/*   Updated: 2020/01/14 10:14:39 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function compares first 'n' bytes of 's1' and 's2' and return an integer
** lesser than, equal to, or greater than zero if 's1' is found, respectively,
** to be lesser than, to match, or be greater than s2.
** For further information, please check the Standard C Library function,
** 'strncmp(const char *s1, const char *s2, size_t n)'
*/

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
