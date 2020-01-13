/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 10:57:34 by adiaz-lo          #+#    #+#             */
/*   Updated: 2020/01/13 12:17:28 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function allocates (with malloc(3)) and returns a copy of the string
** given as argument without the charactersspecified in the set argument at the
** beginning and the end of the string.
*/

#include "libft.h"

/*
** This auxiliar function checks if the trim is possible.
*/

static int	ft_is_trim_possible(char c, char const *set)
{
	int		count;

	count = -1;
	while (set[++count])
		if (set[count] == c)
			return (1);
	return (0);
}

/*
** This auxiliar function obtains the size of the futurible resultant trimmed
** string.
*/

static int	ft_get_size(char const *s1, char const *set)
{
	int		count;
	int		size;

	size = ft_strlen(s1);
	count = 0;
	while (ft_is_trim_possible(s1[size - count - 1], set))
		count++;
	return (size - count);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		count;
	int		size;
	char	*tab;

	count = 0;
	size = 0;
	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	while (ft_is_trim_possible(s1[count], set))
		count++;
	if (count == (int)ft_strlen(s1))
		return (ft_strdup(""));
	size = ft_get_size(s1 + count, set) + 1;
	if (!(tab = (char *)malloc((size) * sizeof(char))))
		return (NULL);
	ft_strlcpy(tab, s1 + count, size);
	return (tab);
}
