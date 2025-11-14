NAME    = libftprintf.a
HEADER  = ft_printf.h
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
SRCSDIR = srcs/

SRC_NAMES = $(SRCSDIR)ft_is_valid_specifier.c $(SRCSDIR)ft_printf.c $(SRCSDIR)ft_putchar.c $(SRCSDIR)ft_putft.c \
            $(SRCSDIR)ft_puthexa.c $(SRCSDIR)ft_putint.c $(SRCSDIR)ft_putstr.c $(SRCSDIR)ft_putunsigned.c $(SRCSDIR)ft_putvoidhexa.c

OBJDIR  = objs
OBJS    = $(addprefix $(OBJDIR)/, $(SRC_NAMES:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJDIR)/%.o: %.c $(HEADER)
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -rf $(OBJDIR)

re: fclean all

.PHONY: all clean fclean re
