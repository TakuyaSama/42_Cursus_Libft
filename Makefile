# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/08 13:03:20 by adiaz-lo          #+#    #+#              #
#    Updated: 2019/11/21 13:52:19 by adiaz-lo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS_MAND = ft_memset.c ft_bzero.c ft_atoi.c ft_strlen.c ft_putchar.c ft_putstr.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c ft_atoi.c ft_isspace.c ft_calloc.c ft_strdup.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlcpy.c 

OBJS = ${SRCS_MAND_MAND:.c=.o}

CC = cc
RM = rm -rf
AR = ar rc
RANLIB = ranlib

CFLAGS = -Wall -Werror -Wextra

.c.o:
	@echo Compiling Binary Files: $@ ...
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):
	@echo Compiling Library File: $@ ...
			${CC} $(CFLAGS) -c $(SRCS_MAND)
			$(AR) $(NAME) $(OBJS)
			$(RANLIB) $(NAME)

all:
	@echo Compiling Library (libft.a) File: $@ ...
	$(NAME)

clean:
	@echo Cleaning The .o Generated Files: $@ ...
			$(RM) ${OBJS}

fclean:		
	@echo Cleaning All (.o & libft.a) Generated Files:
	clean
	$(RM) $(NAME)

re:
	@echo Cleaning All (.o & libft.a) Generated Files & Remake Everything:
	fclean all

.PHONY:		all clean fclean re
