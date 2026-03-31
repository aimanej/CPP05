#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <ostream>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string _name;
	bool _signed;
	const int _g_to_sgn;
	const int _g_to_exe;

public:
	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "GRADE TOO HIGH";
		}
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "GRADE TOO LOW";
		}
	};

	class FormNotSignedException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "FORM NOT SIGNED !";
		}
	};
	AForm(void);
	AForm(std::string name, int sgn, int exe);
	AForm(const AForm &other);
	AForm &operator=(const AForm &other);
	virtual ~AForm(void) = 0;
	std::string getName() const;
	bool SignatureCheck() const;
	int get_gtos() const;
	int get_gtoex() const;
	void beSigned(Bureaucrat &crat);
	void sign();
	virtual void execute(Bureaucrat const &executor) const = 0;
};

std::ostream &operator<<(std::ostream &out,const AForm &form);

#endif
