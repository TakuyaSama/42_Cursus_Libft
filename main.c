/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 11:03:15 by adiaz-lo          #+#    #+#             */
/*   Updated: 2020/01/13 12:15:39 by adiaz-lo         ###   ########.fr       */
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

void	ft_atoi_call()
{
	const char *str = "              	+15454235dsada45423";

	printf("\nft_atoi result test: %d", ft_atoi(str));
	printf("\natoi result test: %d", atoi(str));
}

void	ft_memmove_call()
{
	char *str1 = "Hello";
	char *str2 = "World";

	printf("\nft_atoi result test: %p", ft_memmove(str1, str2, 4));
	printf("\natoi result test: %p", memmove(str1, str2, 4));
}

void	ft_strdup_call()
{
	char *str1 = "Hello";

	printf("\nft_atoi result test: %s", ft_strdup(str1));
	printf("\natoi result test: %s", strdup(str1));
}

void	ft_calloc_call()
{
	printf("\nft_calloc result test: %p", ft_calloc(ft_strlen("Hi"), sizeof("Hi")));
	printf("\ncalloc result test: %p", calloc(ft_strlen("Hi"), sizeof("Hi")));
}

void	ft_putnbr_call()
{
	ft_putnbr_fd(2147483647, 1);
	ft_putnbr_fd(-2147483648, 1);
	
}

int		main(void)
{
	//ft_bzero_call();
	//ft_tolower_call();
	//ft_atoi_call();
	//ft_memmove_call();
	//ft_calloc_call();
	ft_putnbr_call();
}
