SRC		= ft_printf.c ft_init_struct.c ft_convert.c ft_format.c ft_print_char.c ft_print_string.c ft_print_point.c ft_print_decimal.c ft_print_unsigned.c ft_print_hex.c ft_print_hexu.c ft_putnbr_base.c ft_check_base.c ft_print_enter.c

DIR		= libft/

NAME	= libftprintf.a

OBJS	= ${SRC:.c=.o}

CC		= 	gcc

RM		= 	rm -f

CPY		=	cp ./libft/libft.a ${NAME}

AR		=	ar -crs

all:		${NAME}

${NAME}:	${OBJS}
			${MAKE} -C./libft
			${CPY}
			${AR} ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}
			${MAKE} clean -C./libft

fclean:		clean
			${MAKE} fclean -C./libft
			${RM} ${NAME}

re:			fclean all
