Srcs= main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp

Header= Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp

Name= bureaucrat

all: $(Name)

$(Name): $(Srcs) $(Header)
	g++ $(Srcs) -o $(Name)

clean:
	rm -rf $(Name)

re: clean all
