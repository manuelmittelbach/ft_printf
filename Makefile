NAME = ft_printf.a

CC = cc
CFLAGS = -Wall -Werror -Wextra -MMD -MP

SRC = printf.c digit_unsigned_hexa.c char_string_point.c
OBJ = ${SRC:.c=.o}
DEP = ${SRC:.c=.d}

all: ${NAME}

${NAME}: ${OBJ}
	ar rcs ${NAME} ${OBJ}

-include ${DEP}

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f ${OBJ} ${DEP}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all bonus clean fclean re