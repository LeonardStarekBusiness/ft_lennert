NAME = libft.a

CFLAGGEN = -Wall -Wextra -Werror -g
ARFLAGGEN = rcs

CC = cc
AR = ar

QUELLE_DATEIEN = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_memset.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	ft_tolower.c ft_toupper.c \
	ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
	ft_strncmp.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_striteri.c ft_strmapi.c\
	ft_atoi.c ft_itoa.c\
	ft_strdup.c \
	ft_split.c ft_strjoin.c ft_strtrim.c ft_substr.c \
	ft_calloc.c \

OBJEKT_DATEIEN = $(QUELLE_DATEIEN:.c=.o)


all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGGEN) -c $< -o $@

$(NAME): $(OBJEKT_DATEIEN)
	$(AR) $(ARFLAGGEN) $(NAME) $(OBJEKT_DATEIEN)

clean: 
	rm -f $(OBJEKT_DATEIEN)

fclean: clean 
	rm -f $(NAME)

re: fclean all

.PHONY: all clean flcean re
