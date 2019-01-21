# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jbrinksm <jbrinksm@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/01/09 11:44:25 by jbrinksm       #+#    #+#                 #
#    Updated: 2019/01/21 11:00:16 by jbrinksm      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = strlen strdup strndup strcpy strncpy strcmp strncmp strcat strncat \
strlcat strchr strrchr strstr strnstr isalpha isdigit isalnum isascii isprint \
toupper tolower atoi memset bzero memcpy memccpy memmove memchr memcmp putchar \
putstr putnbr memalloc memdel strdel strnew strclr striter striteri strmap \
strmapi strequ strnequ strsub strjoin strtrim strsplit itoa putendl putchar_fd \
putstr_fd putendl_fd putnbr_fd lstnew lstdelone lstdel lstadd lstiter lstmap \
isspace intlen lst_to_str lst_content_size

SRCS := $(SRCS:%=ft_%.c)

OBJS = $(SRCS:.c=.o)

GCC_OBJ = gcc -c -Wall -Werror -Wextra $(SRCS)

CREATE_LIB = ar -rc $(NAME) $(OBJS)

$(NAME):
	$(GCC_OBJ)
	$(CREATE_LIB)
	ranlib $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)
	rm -f *~

fclean: clean
	rm -f $(NAME)

re: fclean all