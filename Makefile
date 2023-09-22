NAME = libftprintf.a

SRCS	=	ft_printf.c		\
			ft_print_conv.c	\
			ft_put.c		\
			ft_strlen.c		\
			to_hexa.c		\

INCLUDE_DIR = include
SRCDIR = ./srcs/
OBJDIR = ./obj/

OBJS = $(SRCS:%.c=$(OBJDIR)%.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror -I $(INCLUDE_DIR)

all: $(OBJDIR) $(NAME)

$(NAME): $(OBJDIR) $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(OBJDIR)%.o: $(SRCDIR)%.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re