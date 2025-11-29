# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aellen-s <aellen-s@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/15 17:54:36 by aellen-s          #+#    #+#              #
#    Updated: 2025/11/27 17:12:35 by aellen-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Name
NAME = libftprintf.a

#Compiler and flag compiler
CC = gcc
CFLAGS = -Wall - Wextra - Werror

#Files and object files
SRCS = ft_putchar.c ft_putstr.c
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