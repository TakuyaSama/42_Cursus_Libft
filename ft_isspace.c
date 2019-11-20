/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:26:08 by adiaz-lo          #+#    #+#             */
/*   Updated: 2019/11/20 13:37:39 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(int c)
{
	unsigned char	value;

	value = (unsigned char)c;
	if (value == '\t' || value == '\n' || value == '\v' || value == '\f' || value == '\r' || value == ' ')
		return (0);
	else
		return (1);
}
