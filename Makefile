NAME	=	push_swap
LIBFTDIR = ./libft
LIBFT = $(LIBFTDIR)/libft.a
CC  = cc
CFLAGS    =   -Wall -Werror -Wextra -g -fsanitize=address -fsanitize=integer -fsanitize=undefined
INCLUDES   = ./includes
SRC_DIR    = ./srcs
AR = ar
ARFLAFS = -rcs
RM = rm -f
SOURCES	=	main.c \
			format_6elems.c \
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
			create_stackdata.c

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

test: $(NAME)
	./push_swap -174813949 -483085156 -1036751833 -1813356996

.PHONY: all bonus fclean clean re test
