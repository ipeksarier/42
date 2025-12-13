# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isarier <isarier@student.42warsaw.pl>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/18 14:46:04 by isarier           #+#    #+#              #
#    Updated: 2025/11/23 19:08:08 by isarier          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprint.a
CC = cc 
CFLAGS = -Wall -Werror -Wextra
LIBFTDIR = ./libft
LIBFT	= $(LIBFTDIR)/libft.a

SRCS = ft_printf.c \


OBJS = $(SRCS:.c=.o)

all: $(NAME)


$(NAME):
	make -C $(LIBFTDIR)
	cp $(LIBFT) printf.a
	cc $(FLAGS) $(SRCS)
	ar rcs $(OBJS) printf.a

clean:
	rm -f $(OBJS)

fclean: clean 
	rm -f $(NAME)

re: fclean all