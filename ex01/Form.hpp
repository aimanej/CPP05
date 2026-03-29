#ifndef FORM_HPP
#define FORM_HPP


#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string _name;
	bool _signed;
	const int _g_to_sgn;
	const int _g_to_exe;

public:
	class GradeTooHighException : public std::exception
	{
		const char *what() const throw()
		{
			return "grade too high";
		}
	};
	class GradeTooLowException : public std::exception
	{
		const char *what() const throw()
		{
			return "grade too Low";
		}
	};
	Form(void);
	Form(std::string name, int sgn, int exe);
	Form(const Form &other);
	Form &operator=(const Form &other);
	~Form(void);
	std::string getName() const;
	bool SignatureCheck() const;
	int get_gtos() const;
	int get_gtoex() const;
	void beSigned(Bureaucrat &crat);
};

std::ostream &operator<<(std::ostream &out, Form &form);

#endif
