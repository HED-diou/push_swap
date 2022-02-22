CC =  cc -c

CFLAGS =-g -Wall -Werror -Wextra 

SRCS = 	func/push_swap.c \
		func/ft_atoi.c \
		func/err_exit.c \
		sort/sa.c \
		sort/sb.c \
		sort/ss.c \
		algo/sort_2.c \
		func/ft_check_is_sorted.c

OBJS = ${SRCS:.c=.o}

ARV = ar -rcs

NAME = push_swap.a

REM = rm -rf

.c.o :
	@-$(CC) ${CFLAGS} $< -o $@
	@-$(ARV) $(NAME) $@

all : $(NAME)
$(NAME) : $(OBJS)
	@echo "\033[1;32m[ Executable check ]\033[0m"
	@-cc ${CFLAGS} ${NAME} func/push_swap.c -o push_swap
	@echo "\033[1;32m[ Executable Updated ]\n\n\n"
	@echo "\n\n\n\033[1;33m██████╗ ██╗   ██╗███████╗██╗  ██╗    ███████╗██╗    ██╗ █████╗ ██████╗ "
	@echo "██╔══██╗██║   ██║██╔════╝██║  ██║    ██╔════╝██║    ██║██╔══██╗██╔══██╗"
	@echo "██████╔╝██║   ██║███████╗███████║    ███████╗██║ █╗ ██║███████║██████╔╝"
	@echo "██╔═══╝ ██║   ██║╚════██║██╔══██║    ╚════██║██║███╗██║██╔══██║██╔═══╝ "
	@echo "██║     ╚██████╔╝███████║██║  ██║    ███████║╚███╔███╔╝██║  ██║██║     "
	@echo "╚═╝      ╚═════╝ ╚══════╝╚═╝  ╚═╝    ╚══════╝ ╚══╝╚══╝ ╚═╝  ╚═╝╚═╝     "
	@echo "                                                                       \033[0m"

clean :
	@-${REM} ${OBJS} ${OBJS_BONUS}
	@echo "\033[1;31m[ Delete Objects files ]\033[0m"

fclean : clean
	@-${REM} ${NAME}
	@-${REM} push_swap
	@echo "\033[1;31m[ Delete Executable ]\033[0m"

re : fclean all

.PHONY : all clean fclean re