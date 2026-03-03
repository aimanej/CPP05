#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class GradeTooHigh : public std::exception
{
	virtual const char *what() const throw()
	{
		return "grade too high";
	}
};


class Bureaucrat {
	private:
		const std::string _name;
		int _grade;
	public:
		GradeTooHigh ex;
		Bureaucrat(void) : _name("djando"), _grade(0){}
		Bureaucrat(std::string name) : _name(name){}
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& other);
		~Bureaucrat(void);
		std::string GetName() const;
		int GetGrade() const;
};

#endif
