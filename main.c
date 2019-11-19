/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 11:03:15 by adiaz-lo          #+#    #+#             */
/*   Updated: 2019/11/19 13:47:08 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_bzero_call()
{
	char *str;

	str = malloc(5);
	ft_bzero(str, 4);
	printf("ft_bzero result test: %s", str);
	bzero(str, 4);
	printf("\nbzero result test: %s", str);
}

void	ft_isspace_call()
{
	printf("ft_isspace result test: %d", isspace(32));
}

void	ft_tolower_call()
{
	int letter_ascii;

	letter_ascii = 63;
	printf("\nft_tolower result test: %d", ft_tolower(letter_ascii));
	printf("\ntolower result test: %d", tolower(letter_ascii));
}

int		main(void)
{
	ft_bzero_call();
	ft_tolower_call();
}
