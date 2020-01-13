/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 13:31:34 by adiaz-lo          #+#    #+#             */
/*   Updated: 2020/01/13 09:24:42 by adiaz-lo         ###   ########.fr       */
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
	size_t	i;
	char	*s1;

	s1 = (char *)s;
	if (n != 0)
	{
		i = 0;
		while (i < n)
		{
			s1[i] = 0;
			i++;
		}
		s1[i] = '\0';
	}
}
