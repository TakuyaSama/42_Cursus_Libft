/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 10:58:49 by adiaz-lo          #+#    #+#             */
/*   Updated: 2019/11/21 13:04:03 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	while (i < len)
	{
		(char *)dst[i] = (char *)src[i];
		i++;
	}	
	return (dst);
}
