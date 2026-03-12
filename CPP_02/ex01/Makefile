# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/12 21:11:23 by marjorie          #+#    #+#              #
#    Updated: 2026/02/12 21:12:25 by marjorie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FixedPoint

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