/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:40:17 by adiaz-lo          #+#    #+#             */
/*   Updated: 2020/01/13 12:58:04 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*string;

	string = (unsigned char*)str;
	while (len-- > 0)
		*(string++) = (unsigned char)c;
	return (str);
}
