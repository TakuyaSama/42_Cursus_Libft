/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 11:29:36 by adiaz-lo          #+#    #+#             */
/*   Updated: 2020/01/13 12:59:24 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function returns a pointer to a new string obtained duplicating 's'.
** For further information, please check the Standard C Library
** strdup(const char *s)
*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		str_len;

	str_len = ft_strlen(s) + 1;
	if ((str = malloc(str_len)))
	{
		ft_strlcpy(str, s, str_len);
		return (str);
	}
	return (NULL);
}
