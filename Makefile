NAME	=	push_swap
LIBFTDIR = ./libft
LIBFT = $(LIBFTDIR)/libft.a
CC  = cc
CFLAGS    =   -Wall -Werror -Wextra
INCLUDES   = ./includes
SRC_DIR    = ./srcs
AR = ar
ARFLAFS = -rcs
RM = rm -f
SOURCES	=	main.c \
			format_6elems.c \
			main_sort.c \
			main_sort2.c \
			main_sort_util.c \
			cmd_push.c \
			cmd_reverse.c \
			cmd_rotate.c \
			cmd_swap.c \
			stack_operation.c \
			ft_push.c \
			ft_pop.c \
			error.c \
			util.c \
			quicksort.c \
			create_stackdata.c \
			put_ans.c \
			check_ans.c \
			check_push.c \
			check_rotate.c \
			check_reverse.c \
			check_swap.c \
			check_pbrapa.c

OBJDIR    = ./obj
OBJECTS   = $(addprefix $(OBJDIR)/, $(notdir $(SOURCES:.c=.o)))
DEPENDS   = $(OBJECTS:.o=.d)

${NAME}: ${INCLUDES} ${OBJECTS}
		make -C $(LIBFTDIR)
		$(CC) ${CFLAGS} ${LIBFT} ${OBJECTS} -o $@

$(OBJDIR)/%.o: $(SRC_DIR)/%.c
	-mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -I $(INCLUDES) -o $@ -c $<

all: $(NAME)

clean:
	make clean -C $(LIBFTDIR)
	$(RM) $(OBJECTS)
	rm -rf $(OBJDIR)

fclean:	clean
	$(RM) $(NAME)
	$(RM) $(LIBFT)

re: fclean all

.PHONY: all bonus fclean clean re test
