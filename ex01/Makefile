Srcs= main.cpp Bureaucrat.cpp Form.cpp

CC= c++

Flags= -Wall -Wextra -Werror -std=c++98

Header= Bureaucrat.hpp Form.hpp

Name= bureaucrat

all: $(Name)

$(Name): $(Srcs) $(Header)
	$(CC) $(Flags) $(Srcs) -o $(Name)

clean:
	rm -rf $(Name)

fclean : clean

re: clean all

.Phony: re all clean fclean
