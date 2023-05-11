# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: galambey <galambey@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/02 14:09:36 by galambey          #+#    #+#              #
#    Updated: 2023/05/10 10:43:38 by galambey         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_putchar_fd.c \
      ft_putstr_fd.c \
      ft_putendl_fd.c \
      ft_putnbr_fd.c \
      ft_atoi.c \
      ft_strlen.c \
      ft_strlcpy.c \
      ft_strlcat.c \
      ft_strncmp.c \
      ft_itoa.c \
      ft_strdup.c \
      ft_split.c \
      ft_strjoin.c \
      ft_isalpha.c \
      ft_isdigit.c \
      ft_isalnum.c \
      ft_isascii.c \
      ft_isprint.c \
      ft_toupper.c \
      ft_tolower.c \
      ft_strchr.c \
      ft_strrchr.c \
      ft_strnstr.c \
      ft_memset.c \
      ft_memchr.c \
      ft_memcpy.c \
      ft_memcmp.c \
      ft_bzero.c \
      ft_memmove.c \
      ft_calloc.c \
      ft_strtrim.c \
      ft_substr.c \
      ft_striteri.c \
      ft_strmapi.c
SRC_BONUS = ft_lstadd_front.c \
	    ft_lstnew.c \
	    ft_lstsize.c \
	    ft_lstadd_back.c \
	    ft_lstlast.c \
	    ft_lstdelone.c \
	    ft_lstclear.c \
	    ft_lstiter.c \
	    ft_lstmap.c
OBJS = $(SRC:.c=.o)
OBJS_BONUS = $(SRC_BONUS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rcs $@ $(OBJS)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus : $(OBJS_BONUS)
	ar -rcs $(NAME) $(OBJS_BONUS)
          
clean :
	rm -f $(OBJS) $(OBJS_BONUS)

fclean : clean
	rm -f $(NAME)

re : fclean all
