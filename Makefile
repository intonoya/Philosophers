# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: intonoya <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 19:50:25 by intonoya          #+#    #+#              #
#    Updated: 2023/01/16 19:50:30 by intonoya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	philo

SRC				=	$(wildcard *.c)

OBJS			=	${SRC:.c=.o}

CC				=	gcc

RM				=	rm -rf

CFLAGS			=	-Wall -Werror -Wextra

.c.o			:
					${CC} ${CFLAGS}  -c $< -o ${<:.c=.o}

$(NAME)			:	${OBJS} ${LIBFT}
						${CC} ${CFLAGS} ${OBJS} -o ${NAME}	$(LIBFT) 

all				:	${NAME}

clean			:	
					${RM} ${OBJS}

fclean			:	clean
						${RM} ${NAME}

re				:	fclean all

.PHONY			:	all clean fclean re
