# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcarc <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/16 15:43:24 by mcarc             #+#    #+#              #
#    Updated: 2019/09/23 18:45:45 by mcarc            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_btree_create_node.c ft_btree_apply_prefix.c ft_btree_apply_infix.c ft_btree_apply_suffix.c ft_btree_insert_data.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strnew.c ft_memalloc.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_isalpha.c ft_isalnum.c ft_memdel.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_atoi.c ft_strlcat.c ft_strtrim.c ft_strsplit.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c

SRCDEL = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRCDEL)
	@ar rc $(NAME) $(SRCDEL)

%.o: %.c
	@gcc -c -I. -Wall -Wextra -Werror $< -o $@

clean:
	@/bin/rm -f $(SRCDEL)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
