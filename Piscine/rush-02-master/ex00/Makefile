# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdeville <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/19 12:24:24 by mdeville          #+#    #+#              #
#    Updated: 2017/07/22 21:38:19 by mdeville         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_list.c ft_std.c main.c readstd.c rush_core.c rushes.c check.c

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^

$(NAME): $(SRC:.c=.o)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(SRC:.c=.o)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
