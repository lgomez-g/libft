# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgomez-g <lgomez-g@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/13 12:34:40 by lgomez-g          #+#    #+#              #
#    Updated: 2023/04/16 20:44:07 by lgomez-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I .

RM = rm -f

SRC    = ft_strlen.c \
         ft_isalpha.c \
		 ft_isdigit.c \
		 ft_isprint.c \
		 ft_isascii.c \
		 ft_isalnum.c \
		 ft_toupper.c \
		 ft_tolower.c \
		 ft_strrchr.c \
		 ft_strchr.c \
		 ft_putchar_fd \
		 ft_putstr_fd.c \
		 ft_strncmp.c \
		 ft_atoi.c \
		 ft_strdup.c \
		 ft_memcpy.c \
		 ft_memcmp.c \
		 ft_calloc.c \
		 
		 
		 
		 
		  
OBJ = $(SRC:.c=.o)

BONUS = ft_lstnew.c

BONUS_OBJ = $(BONUS:.c=.o)

all:	$(NAME)

bonus:    $(BONUS_OBJ)
	ar rcs $(NAME) $(BONUS_OBJ)

$(NAME):    $(OBJ)
		ar rcs $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ) $(BONUS_OBJ)

fclean:    clean
		$(RM) $(NAME)

re:	fclean $(NAME)