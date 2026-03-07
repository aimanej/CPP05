#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "form.hpp"

class ShrubberyCreationForm : public AForm {
	private:
		std::string _target;
	public:
		ShrubberyCreationForm(void);

		ShrubberyCreationForm(std::string target);
		// virtual void sign();
		// ShrubberyCreationForm(const ShrubberyCreationForm& other);
		// ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
		~ShrubberyCreationForm(void);
		void execute(Bureaucrat const & executor) const;
};

std::ostream &operator<<(std::ostream &out, ShrubberyCreationForm &form);

#endif
