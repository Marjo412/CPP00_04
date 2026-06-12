NAME = Serializer

CC = c++
CFLAGS = -Werror -Wextra -Wall -std=c++98
INCLUDE = include

SRC = main.cpp \
	Serializer.cpp

OBJDIR = obj

OBJ = $(SRC:%.cpp=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all