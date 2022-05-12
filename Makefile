CC =  cc

CFLAGS = -Wall -Werror -Wextra 

SRCS = 	func/push_swap.c \
		func/utils1.c \
		func/ft_atoi.c \
		func/err_exit.c \
		func/index_stack.c \
		func/lst.c \
		sort/sa.c \
		sort/sb.c \
		sort/ss.c \
		sort/pa.c \
		sort/pb.c \
		sort/ra.c \
		sort/rb.c \
		sort/rr.c \
		sort/rra.c \
		sort/rrb.c \
		sort/rrr.c \
		algo/sort_2.c \
		algo/sort_3.c \
		algo/sort_4.c \
		algo/sort_5.c \
		func/ft_check_is_sorted.c \
		algo/sort.c \

BONUS =	checker_bonus/checker.c \
		checker_bonus/get_next_line.c \
		checker_bonus/get_next_line_utils.c \
		checker_bonus/utils1.c \
		checker_bonus/ft_atoi.c \
		checker_bonus/err_exit.c \
		checker_bonus/index_stack.c \
		checker_bonus/lst.c \
		checker_bonus/sa.c \
		checker_bonus/sb.c \
		checker_bonus/ss.c \
		checker_bonus/pa.c \
		checker_bonus/pb.c \
		checker_bonus/ra.c \
		checker_bonus/rb.c \
		checker_bonus/rr.c \
		checker_bonus/rra.c \
		checker_bonus/rrb.c \
		checker_bonus/rrr.c \
		checker_bonus/sort_2.c \
		checker_bonus/sort_3.c \
		checker_bonus/sort_4.c \
		checker_bonus/sort_5.c \
		checker_bonus/ft_check_is_sorted.c \
		checker_bonus/sort.c \
	
OBJS = ${SRCS:.c=.o}

BOBJS = ${BONUS:.c=.o}

NAME_B = checker

ARV = ar -rcs

NAME = push_swap

REM = rm -rf

.c.o :
	@-$(CC) -c ${CFLAGS} $< -o $@

all : $(NAME) $(SRCS)
$(NAME) : $(OBJS)
	@echo "\033[1;32m[ Executable check ]\033[0m"
	@-cc ${CFLAGS} $(OBJS) -o push_swap
	@echo "\033[1;32m[ Executable Updated ]\n\n\n"
	@echo "\n\n\n\033[1;33m██████╗ ██╗   ██╗███████╗██╗  ██╗    ███████╗██╗    ██╗ █████╗ ██████╗ "
	@echo "██╔══██╗██║   ██║██╔════╝██║  ██║    ██╔════╝██║    ██║██╔══██╗██╔══██╗"
	@echo "██████╔╝██║   ██║███████╗███████║    ███████╗██║ █╗ ██║███████║██████╔╝"
	@echo "██╔═══╝ ██║   ██║╚════██║██╔══██║    ╚════██║██║███╗██║██╔══██║██╔═══╝ "
	@echo "██║     ╚██████╔╝███████║██║  ██║    ███████║╚███╔███╔╝██║  ██║██║     "
	@echo "╚═╝      ╚═════╝ ╚══════╝╚═╝  ╚═╝    ╚══════╝ ╚══╝╚══╝ ╚═╝  ╚═╝╚═╝     "
	@echo "                                                                       \033[0m"

bonus :	$(NAME_B) $(BONUS)
$(NAME_B) : $(BOBJS)
	@-cc ${CFLAGS} $(BOBJS) -o $(NAME_B)
	@echo "\n\n\n\033[1;34m██████╗  ██████╗ ███╗   ██╗██╗   ██╗███████╗"
	@echo "██╔══██╗██╔═══██╗████╗  ██║██║   ██║██╔════╝"
	@echo "██████╔╝██║   ██║██╔██╗ ██║██║   ██║███████╗"
	@echo "██╔══██╗██║   ██║██║╚██╗██║██║   ██║╚════██║"
	@echo "██████╔╝╚██████╔╝██║ ╚████║╚██████╔╝███████║"
	@echo "╚═════╝  ╚═════╝ ╚═╝  ╚═══╝ ╚═════╝ ╚══════╝\033[0m"

clean :
	@-${REM} ${OBJS} ${BOBJS}
	@echo "\033[1;31m[ Delete Objects files ]\033[0m"

fclean : clean
	@-${REM} ${NAME}
	@-${REM} push_swap
	@-${REM} checker
	@echo "\033[1;31m[ Delete Executable ]\033[0m"

re : fclean all

.PHONY : all clean fclean bonus re