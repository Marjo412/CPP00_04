# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrosset <mrosset@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/12 10:55:23 by mrosset           #+#    #+#              #
#    Updated: 2026/02/12 10:55:24 by mrosset          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MyFirstCanonical

CC = c++
CFLAGS = -Werror -Wextra -Wall -std=c++98
INCLUDE = include

SRC = src/main.cpp \
	src/Fixed.cpp

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all