NAME_P := MutantStack

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

OBJECTS = $(SRC:.cpp=.o)

all: $(NAME_P)

$(NAME_P): $(OBJECTS)
	@echo "\033[0;32m\n\nCompiling MutantStack..."
	@$(CC) -o $(NAME_P) $(OBJECTS)
	@echo "\n\033[0;32mDone."

%.o:%.cpp MutantStack.hpp
	@printf "\033[0;33mGenerating MutantStack objects... %-10.10s\r" $@
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "\033[0;31m\nDeleting objects..."
	@rm -f $(OBJECTS) $(OBJECTSB)
	@echo "\n\033[0;31mDeleted.\n"	

fclean: clean
	@rm -f $(NAME_P)

re: fclean all