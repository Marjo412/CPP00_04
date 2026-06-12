# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/10 20:04:22 by marjorie          #+#    #+#              #
#    Updated: 2026/03/14 14:31:23 by marjorie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

CC = c++
CFLAGS = -Werror -Wextra -Wall -std=c++98
INCLUDE = include

SRC = src/main.cpp \
		src/Animal.cpp \
		src/Cat.cpp \
		src/Dog.cpp \
		src/WrongAnimal.cpp \
		src/WrongCat.cpp

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