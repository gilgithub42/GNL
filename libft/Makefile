# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gigregoi <gigregoi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/25 19:57:31 by gigregoi          #+#    #+#              #
#    Updated: 2020/08/29 14:01:13 by gigregoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SUFFIXES:

NAME = libft.a
FLAGS = -Wall -Werror -Wextra

SOURCESREP = .
HEADERSREP = ./includes
OBJECTSREP = .

SOURCEFILES = ft_atoi.c \
ft_bzero.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_memccpy.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_putchar.c \
ft_putstr.c \
ft_strcat.c \
ft_strchr.c \
ft_strcmp.c \
ft_strcpy.c \
ft_strdup.c \
ft_strlcat.c \
ft_strlen.c \
ft_strncat.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strrchr.c \
ft_strstr.c \
ft_tolower.c \
ft_toupper.c \
ft_strncpy.c \
ft_memalloc.c \
ft_memdel.c \
ft_strnew.c \
ft_strdel.c \
ft_strclr.c \
ft_striter.c \
ft_striteri.c \
ft_strmap.c \
ft_strmapi.c \
ft_strequ.c \
ft_strnequ.c \
ft_strsub.c \
ft_strjoin.c \
ft_strtrim.c \
ft_putnbr.c \
ft_itoa.c \
ft_putstr.c \
ft_putendl.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_strsplit.c \
ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c

SOURCES = $(patsubst %.c, $(SOURCESREP)/%.c, $(SOURCEFILES))
OBJECTFILES = $(SOURCEFILES:.c=.o)
OBJECTS = $(patsubst %.o, $(OBJECTSREP)/%.o, $(OBJECTFILES))

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

$(OBJECTSREP)/%.o: $(SOURCESREP)/%.c
	gcc -c $(FLAGS) $^ -I$(HEADERSREP) -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
