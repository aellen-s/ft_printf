# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aellen-s <aellen-s@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/15 17:54:36 by aellen-s          #+#    #+#              #
#    Updated: 2025/11/29 19:45:03 by aellen-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Name
NAME = libftprintf.a

#Compiler and flag compiler
CC = gcc
CFLAGS = -Wall -Wextra -Werror

#Files and object files
SRCS = ft_putchar.c ft_putstr.c ft_puthex.c ft_puthex_long.c ft_putnbr.c \
	ft_putnbr_unsigned.c ft_putptr.c
OBJS = $(SRCS:.c=.o)

#Comands
RM = rm -f
AR = ar rcs

all: $(NAME)
	@echo "Sucessful!"

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re