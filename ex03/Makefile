Srcs= main.cpp Intern.cpp PresidentialPardonForm.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp

CC= c++

Flags= -Wall -Wextra -Werror -std=c++98

Header= Intern.hpp PresidentialPardonForm.hpp Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp

Name= bureaucrat

all: $(Name)

$(Name): $(Srcs) $(Header)
	$(CC) $(Flags) $(Srcs) -o $(Name)

clean:
	rm -rf $(Name)

fclean : clean

re: clean all

.Phony: re all clean fclean
