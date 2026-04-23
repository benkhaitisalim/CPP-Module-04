NAME = Animal
CC = c++
CFLAGS = -Wall -Wextra -Werror 
SRC = AAnimal.cpp Cat.cpp Dog.cpp main.cpp  WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJ = $(SRC:.cpp=.o)
all : $(NAME)
$(NAME) : $(OBJ)
	$(CC) $(CFLAGS)  $(OBJ) -o $(NAME)
%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
clean :
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(NAME)
re : fclean all

