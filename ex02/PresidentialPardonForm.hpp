#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "form.hpp"

class PresidentialPardonForm : public AForm{
	private:
		std::string _target;
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		void execute(Bureaucrat const &executor) const;
		// PresidentialPardonForm(const PresidentialPardonForm& other);
		// PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
		~PresidentialPardonForm(void);
};

#endif
