# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lramos-r <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/22 18:13:00 by lramos-r          #+#    #+#              #
#    Updated: 2019/10/22 19:26:32 by lramos-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= BSQ
SRC			= ./src/claudia.c ./src/mainBSQ.c ./src/ft_putstr.c \
			  ./src/ft_putchar.c
OBJ			= ${SRC:.c=.o}
RM			= rm -f
CCFLAGS		= -Wall -Wextra -Werror

${NAME}:	${OBJ}
	cc ${CCFLAGS} ${OBJ} -o ${NAME}

all:		${NAME}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all
