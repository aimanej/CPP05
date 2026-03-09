Srcs= main.cpp PresidentialPardonForm.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp

Header= PresidentialPardonForm.hpp Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp

Name= bureaucrat

all: $(Name)

$(Name): $(Srcs) $(Header)
	g++ $(Srcs) -o $(Name)

clean:
	rm -rf $(Name)

re: clean all
