/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 11:12:22 by adiaz-lo          #+#    #+#             */
/*   Updated: 2020/01/13 11:32:38 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function allocates (with malloc()) and returns an array of strings
** obtained by splitting 's' using the character 'c' as a delimiter.  The array
** must be ended by a NULL pointer.
*/

#include "libft.h"

/*
** This auxiliar function
*/

static int		ft_div_counter(char const *s, char c)
{
	int i;
	int counter;

	counter = 0;
	if (s[0] && s[0] != c)
		counter++;
	i = 0;
	while (i < (int)ft_strlen(s))
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1])
			counter++;
		i++;
	}
	return (counter);
}

/*
** This auxiliar function segments the 's' array into parts. 
 */

static char		*ft_segmentator(char const *s, char c, int i)
{
	int		j;
	int		k;
	char	*resultant_string;

	j = i;
	while (s[i] && s[i] != c)
		i++;
	resultant_string = (char *)malloc(sizeof(char) * ((i - j) + 1));
	if (!resultant_string)
		return (NULL);
	k = 0;
	while (j != i)
	{
		resultant_string[k] = s[j];
		k++;
		j++;
	}
	resultant_string[k] = '\0';
	return (resultant_string);
}

char			**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * (ft_div_counter(s, c) + 1));
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	while (i <= (int)ft_strlen(s) && ft_div_counter(s, c))
	{
		if (ft_strlen(ft_segmentator(s, c, i)))
		{
			array[j] = ft_segmentator(s, c, i);
			i += (ft_strlen(array[j]) + 1);
			j++;
		}
		else
			i++;
	}
	array[j] = NULL;
	return (array);
}
