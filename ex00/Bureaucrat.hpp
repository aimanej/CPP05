#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
private:
	const std::string _name;
	int _grade;

public:
	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "grade too high";
		}
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "grade too Low";
		}
	};
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);
	~Bureaucrat(void);
	std::string getName() const;
	int getGrade() const;
	void inc_grade();
	void dec_grade();
};

std::ostream &operator<<(std::ostream &stream, Bureaucrat &obj);

#endif
