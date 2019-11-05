/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:40:17 by adiaz-lo          #+#    #+#             */
/*   Updated: 2019/11/05 11:40:25 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*b_value;
	int				i;

	b_value = (unsigned char*)b;
	i = 0;
	while (i < len)
	{
		b_value[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
