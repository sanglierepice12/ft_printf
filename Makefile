SRCS    =	ft_printf.c	\
			ft_string_format.c

#BNS        =

OBJS	=	${SRCS:.c=.o}

#B_OBJS	=	${BNS:.c=.o}

HEADER	=	libft.h

NAME	=	libft.a

CC	=	cc

AR	=	ar -rc

FLAGS	=	-Wall -Wextra -Werror

all	:	${NAME}

%.o	:	%.c ${HEADER}
	${CC} ${FLAGS} -c $< -o $@

${NAME}	:	${OBJS} Makefile
	${AR} ${NAME} ${OBJS}

#bonus	:
#		@make SRCS="${SRCS} ${BNS}"

clean	:
	rm -f ${OBJS} ${B_OBJS}

fclean	:	clean
	rm -f ${NAME} ${B_OBJS}

re	:	fclean all

.PHONY	:	all clean fclean re bonus