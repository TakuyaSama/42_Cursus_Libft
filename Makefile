# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/08 13:03:20 by adiaz-lo          #+#    #+#              #
#    Updated: 2020/01/13 13:06:20 by adiaz-lo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRCS_MAND	=	ft_memset.c		\
		  		ft_memmove.c	\
		  		ft_memchr.c		\
		  		ft_memcmp.c		\
		  		ft_memcpy.c		\
		  		ft_memccpy.c	\
		  		ft_bzero.c		\
		  		ft_atoi.c		\
		  		ft_strlen.c		\
		  		ft_strlcpy.c	\
		  		ft_strlcat.c	\
		 	 	ft_strchr.c		\
		 		ft_strrchr.c	\
		  		ft_strnstr.c	\
		  		ft_atoi.c		\
		  		ft_isalnum.c	\
		  		ft_isdigit.c	\
		  		ft_isalpha.c	\
		  		ft_isascii.c	\
		 		ft_isprint.c	\
		  		ft_tolower.c	\
		  		ft_toupper.c	\
		  		ft_calloc.c		\
		  		ft_strdup.c		\
				ft_itoa.c		\
				ft_substr.c		\
				ft_strjoin.c	\
				ft_strtrim.c	\
				ft_split.c		\
				ft_strmapi.c	\
				ft_putchar_fd.c	\
				ft_putstr_fd.c	\
				ft_putendl_fd.c	\
				ft_putnbr_fd.c	

SRCS_BON	=	ft_lstnew.c			\
		  		ft_lstadd_front.c	\
		  		ft_lstsize.c		\
		  		ft_lstlast			\
				ft_lstadd_back		\
				ft_lstdelone		\
				ft_lstclear			\
				ft_lstiter			\
				ft_lstmap

OBJS_MAND	= ${SRCS_MAND:.c=.o}

OBJS_BON	= ${SRCS_BON:.c=.o}

CC		= cc

RM		= rm -rf

AR		= ar rcs

RANLIB		= ranlib

CFLAGS		= -Wall -Werror -Wextra

all	:
	@echo Compiling Library "libft.a" File "Only Mandatory Part": $@ ...
	$(NAME)

$(NAME)	:
		@echo Compiling Library File: $@ ...
			${CC} $(CFLAGS) -c $(SRCS_MAND)
			$(AR) $(NAME) $(OBJS_MAND)
			$(RANLIB) $(NAME)

.c.o	:
		@echo Compiling Binary Files: $@ ...
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

bonus	:
		@echo Compiling Library "libft.a" File "Mandatory + Bonus Part": $@ ...
		$(OBJS_MAND) $(OBJS_BON) libft.h
		$(AR) $(NAME) $(OBJS_BON) $(OBJS_MAND)

clean	:
		@echo Cleaning The .o Generated Files: $@ ...
		$(RM) ${OBJS_MAND} ${OBJS_BON}

fclean	:
		@echo Cleaning All (.o & libft.a" Generated Files:
		clean
		$(RM) $(NAME)

re	:
	@echo Cleaning All ".o & libft.a" Generated Files & Remake Everything:
	fclean all

.PHONY:		all clean fclean re bonus
