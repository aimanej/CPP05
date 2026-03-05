Srcs= main.cpp Bureaucrat.cpp

Header= Bureaucrat.hpp

Name= Bureaucrat

all: $(Name)

$(Name): $(Srcs) $(Header)
	g++ $(Srcs) -o $(Name)

clean:
	rm -rf $(Name)

