NAME		=	push_swap

NAME_B  	=	checker

SRCS		= 	sources/ft_atoi.c\
				sources/ft_putchar_fd.c\
				sources/ft_putstr_fd.c\
				sources/ft_split.c sources/main.c\
				sources/ft_list.c\
				sources/ft_swap_function_1.c\
				sources/ft_swap_function_2.c\
				sources/ft_swap_function_3.c\
				sources/ft_swap_function_4.c\
				sources/ft_indexing.c\
				sources/ft_sort_boll_1.c\
				sources/ft_algo_three_five.c\
				sources/ft_sort_big_1.c\
				sources/ft_sort_big_2.c\

SRCS_B		= 	sources/checker.c\
				sources/checker_dop.c\
				sources/ft_atoi.c\
				sources/ft_putchar_fd.c\
				sources/ft_putstr_fd.c\
				sources/ft_split.c\
				sources/ft_list.c\
				sources/ft_swap_function_1_bonus.c\
				sources/ft_swap_function_2_bonus.c\
				sources/ft_swap_function_3_bonus.c\
				sources/ft_swap_function_4.c\
				sources/ft_indexing.c\
				sources/ft_sort_boll_1.c\


OBJS		= 	$(patsubst %.c,%.o,$(SRCS))

OBJS_B		=	$(patsubst %.c,%.o,$(SRCS_B))

CC			= 	gcc

CFLAGS		= 	-Wall -Wextra -Werror

INCLUDES	= 	sources/push_swap.h

RM			= 	rm -rf

all: 			$(NAME)

$(OBJS): $(INCLUDES)
$(OBJS_B): $(INCLUDES)

$(NAME): 		$(OBJS)
				@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(NAME_B): 		$(OBJS_B)
				@$(CC) $(CFLAGS) -o $(NAME_B) $(OBJS_B)	

bonus:			$(NAME_B)			

clean:
				@${RM} $(OBJS) $(OBJS_B)

fclean:			
				@${RM} $(OBJS) $(OBJS_B) $(NAME) $(NAME_B)

re:				fclean all

.PHONY:			all clean fclean re bonus