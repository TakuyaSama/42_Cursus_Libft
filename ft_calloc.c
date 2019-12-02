/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 12:33:07 by adiaz-lo          #+#    #+#             */
/*   Updated: 2019/11/21 13:32:23 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * ft_calloc allocates memory for an array of count elements of size bytes each and returns a pointer to the allocated memory.
 * For more info, please search for man calloc.
 *
**/ 

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	if (count * size > 2147483647)
	{
		char	*str_err;

		*str_err = "Error";
		return (str_err);
	}
	void	*ptr;

	ptr = malloc(count * size);
	return (ptr);
}
