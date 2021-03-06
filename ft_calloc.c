/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 12:33:07 by adiaz-lo          #+#    #+#             */
/*   Updated: 2020/01/13 09:29:39 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function allocates memory for an array of count elements of size bytes
** each and returns a pointer to the allocated memory.
** For further information, please check for Standard C Library function
** 'calloc(size_t count, size_t size)'.
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*array;

	if (!(array = (char *)malloc(size * count)))
		return (NULL);
	return (ft_memset(array, 0, size * count));
}
