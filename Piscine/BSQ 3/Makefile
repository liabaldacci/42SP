# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/22 18:13:00 by lramos-r          #+#    #+#              #
#    Updated: 2019/10/23 17:35:08 by lborges-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= BSQ
SRC			= ft_putstr.c ft_find_big_square.c mark_sqr.c claudia.c main.c \
			  ft_std_input.c ft_check_table.c ft_strcat.c ft_str_is_numeric.c
OBJ			= ${SRC:.c=.o}
RM			= rm -f
CCFLAGS		= -Wall -Wextra -Werror

${NAME}:	${OBJ}
	cc ${CCFLAGS} ${OBJ} -o ${NAME}

all:${NAME}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all
