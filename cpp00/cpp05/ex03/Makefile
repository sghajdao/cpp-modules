NAME_P := Bureaucrat

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

OBJECTS = $(SRC:.cpp=.o)

all: $(NAME_P)

$(NAME_P): $(OBJECTS)
	@echo "\033[0;32m\n\nCompiling Bureaucrat..."
	@$(CC) -o $(NAME_P) $(OBJECTS)
	@echo "\n\033[0;32mDone."

%.o:%.cpp Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp
	@printf "\033[0;33mGenerating Bureaucrat objects... %-10.10s\r" $@
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "\033[0;31m\nDeleting objects..."
	@rm -f $(OBJECTS) $(OBJECTSB)
	@echo "\n\033[0;31mDeleted.\n"	

fclean: clean
	@rm -f $(NAME_P)

re: fclean all