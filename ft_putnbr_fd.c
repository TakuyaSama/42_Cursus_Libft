/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 12:04:43 by adiaz-lo          #+#    #+#             */
/*   Updated: 2020/01/13 12:15:42 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function outputs the integer 'n' to given file descriptor 'fd'.
*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int aux;

	aux = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		aux = (unsigned int)(n * -1);
	}
	if (aux > 9)
		ft_putnbr_fd(aux / 10, fd);
	ft_putchar_fd((char)(aux % 10 + '0'), fd);
}
