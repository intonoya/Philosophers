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
