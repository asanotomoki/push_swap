NAME	=	push_swap
LIBFTDIR = ./libft
LIBFT = $(LIBFTDIR)/libft.a
CC  = cc
CFLAGS    =   -Wall -Wextra -Werror -g -fsanitize=address -fsanitize=integer -fsanitize=undefined
INCLUDES   = ./includes
SRC_DIR    = ./srcs
AR = ar
ARFLAFS = -rcs
RM = rm -f
SOURCES	=	main.c \
			cmd_push.c \
			cmd_reverse.c \
			cmd_rotate.c \
			cmd_swap.c
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
	./pipex infile "$(cmd1)" "$(cmd2)" outfile
	<infile $(cmd1) | $(cmd2) > test_outfile
	diff outfile test_outfile

.PHONY: all bonus fclean clean re test
