NAME    = libftprintf.a
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
INCDIR  = includes
SRCDIR  = srcs
OBJDIR  = objs

SRCS    = ft_is_valid_specifier.c \
          ft_printf.c \
          ft_putchar.c \
          ft_putft.c \
          ft_puthexa.c \
          ft_putint.c \
          ft_putstr.c \
          ft_putunsigned.c \
          ft_putvoidhexa.c

OBJS    = $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJDIR)/%.o: $(SRCDIR)/%.c $(INCDIR)/ft_printf.h
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
