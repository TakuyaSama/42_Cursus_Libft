/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 13:03:04 by adiaz-lo          #+#    #+#             */
/*   Updated: 2019/11/21 13:51:46 by adiaz-lo         ###   ########.fr       */
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
void	*ft_memmove(void *dst, const void *src, size_t len);
char    *ft_strdup(const char *s1);
void    *ft_calloc(size_t count, size_t size);
size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);
void	*memccpy(void *restrict dst, const void *restrict src, int c, size_t n);

void	ft_putstr(char *str);
void	ft_putchar(char c);

#endif
