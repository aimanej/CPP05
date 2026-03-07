#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <ostream>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
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
		AForm(void);
		AForm(std::string name, int sgn, int exe);
		// AForm(const AForm& other);
		AForm& operator=(const AForm& other);
		virtual ~AForm(void) = 0;
		std::string GetName() const;
		bool SignatureCheck() const;
		void sign();
		int get_gtos();
		int get_gtoex();
		void beSigned(Bureaucrat& crat);
		virtual void execute(Bureaucrat const & executor) const;

};

// std::ostream &operator<<(std::ostream &out, AForm form);

#endif
