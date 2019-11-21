/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 13:24:15 by adiaz-lo          #+#    #+#             */
/*   Updated: 2019/11/21 13:43:55 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while(i < n)
	{
		if ((unsigned char)s1[i] == (unsigned char)s2[i])
		{
			return (0);
		}
		else
			return (s1[i] - s2[i]);
		i++;
	}
}
