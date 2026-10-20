# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amanet <amanet@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/20 14:29:01 by amanet            #+#    #+#              #
#    Updated: 2026/10/20 15:29:27 by amanet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Werror -Wextra -Wall -Iincludes

SRC_FILE = ft_putchar.c \
			ft_putstr.c \
			ft_strcmp.c \
			ft_strlen.c \
			ft_swap.c

SOURCES = $(addprefix $(DIR)/, $(SRC_FILE))

OBJECTS = $(DIR)/$(SOURCES:.c=.o)

TARGET = libft.a

DIR = srcs

all: $(TARGET)

$(TARGET): $(OBJECTS)
	ar rcs $(OBJECTS) -o $(TARGET)

$(DIR)/%.o: $(DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
