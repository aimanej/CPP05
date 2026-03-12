#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
	private:
		AForm *shruberry(std::string target);
		AForm *robot(std::string target);
		AForm *pardon(std::string target);
	public:
		class FormNotFoundException : public std::exception{
			virtual const char * what() const throw();
		};
		AForm *makeForm(std::string name, std::string target);
		Intern(void);
		Intern(const Intern& other);
		Intern& operator=(const Intern& other);
		~Intern(void);
};

#endif
