# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/14 14:30:56 by marjorie          #+#    #+#              #
#    Updated: 2026/03/14 14:31:46 by marjorie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Brain

CC = c++
CFLAGS = -Werror -Wextra -Wall -std=c++98
INCLUDE = include

SRC = src/main.cpp \
		src/Animal.cpp \
		src/Cat.cpp \
		src/Dog.cpp \
		src/WrongAnimal.cpp \
		src/WrongCat.cpp \
		src/Brain.cpp

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