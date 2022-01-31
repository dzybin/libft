# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dzybin <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/11 14:25:08 by dzybin            #+#    #+#              #
#    Updated: 2022/01/31 12:08:12 by dzybin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= gcc
AR	= ar
ARFLAGS	= rc
CFLAGS	= -Wall -Wextra -Werror 
NAME	= libft.a
INCLUDE	= include/
HEAEDR	= ${INCLUDE}libft.h
SRC	= ft_strlen.c ft_atoi.c ft_memset.c ft_abs.c \
	ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
	ft_strncmp.c ft_strnstr.c ft_strlcpy.c\
	ft_strlcat.c ft_strchr.c ft_substr.c ft_strdup.c \
	ft_strrchr.c ft_toupper.c ft_tolower.c ft_strnew.c \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_striteri.c ft_strmapi.c ft_calloc.c\
	ft_split.c ft_strjoin.c ft_strtrim.c ft_itoa.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
	
OBJ	= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

re: fclean all
