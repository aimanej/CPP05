Srcs= main.cpp Bureaucrat.cpp Form.cpp

Header= Bureaucrat.hpp Form.hpp

Name= bureaucrat

all: $(Name)

$(Name): $(Srcs) $(Header)
	g++ $(Srcs) -o $(Name)

clean:
	rm -rf $(Name)

