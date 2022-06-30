SRCS	 = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS	 = ${SRCS:.c=.o}
NAME	 = libft.a
INC		 = includes
GCC		 = gcc -Wall -Wextra -Werror
LIBC	 = ar rc
LIBR	 = ranlib
RM		 = rm -f

.c.o:
	${GCC} -c $< -o ${<:.c=.o} -I ${INC}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}
	${LIBR} ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
