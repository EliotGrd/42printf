SRCS = ft_printf.c ft_putnbr_base.c ft_utils.c

OBJS = $(SRCS:.c=.o)

INC = ft_printf.h



NAME = libftprintf.a

RM = /bin/rm -f

CCFLAGS = -Wall -Wextra -Werror -g



all : $(NAME)

%.o : %.c $(INC)
	cc $(CCFLAGS) -I$(INC) -c $< -o  $@

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

