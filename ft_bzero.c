/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 13:31:34 by adiaz-lo          #+#    #+#             */
/*   Updated: 2020/01/14 09:26:18 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function erases the data in the 'n' bytes of the memory starting at the
** location pointed by 's', writing zeroes.
** For further information, please check the Standard C Library function
** bzero(void *s, size_t n)
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	while (n-- > 0)
		*(s1++) = '\0';
}
