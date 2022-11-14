NAME=ex03
CC=g++
CFLAGS=-Wall -Wextra -Werror -std=c++98
RM=rm -f

FILES=main.cpp Fixed.cpp Point.cpp bsp.cpp
HEADERS=Fixed.hpp Point.hpp

OBJ=$(FILES:%.cpp=%.o)

%.o: %.cpp $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJ) $(HEADERS)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: make all clean fclean re