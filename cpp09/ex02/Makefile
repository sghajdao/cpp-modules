NAME := PmergeMe

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = PmergeMe.cpp main.cpp

OBJECTS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	@echo "\033[0;32m\n\nCompiling PmergeMe..."
	@$(CC) -o $(NAME) $(OBJECTS)
	@echo "\n\033[0;32mDone."

%.o:%.cpp PmergeMe.hpp
	@printf "\033[0;33mGenerating PmergeMe objects... %-10.10s\r" $@
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "\033[0;31m\nDeleting objects..."
	@rm -f $(OBJECTS) $(OBJECTSB)
	@echo "\n\033[0;31mDeleted.\n"	

fclean: clean
	@rm -f $(NAME)

re: fclean all