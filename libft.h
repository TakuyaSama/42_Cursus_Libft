/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 13:03:04 by adiaz-lo          #+#    #+#             */
/*   Updated: 2019/11/20 14:02:38 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <strings.h>
# include <string.h>
# include <unistd.h>
# include <ctype.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_tolower(int c);
size_t  ft_strlen(const char *s);
int		ft_isspace(int c);

void	ft_putstr(char *str);
void	ft_putchar(char c);

#endif
