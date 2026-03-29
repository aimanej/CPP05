#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm() {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25 , 5){
	_target = target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	std::cout << _target << "has been pardoned by Zaphod Beeblebrox" << std::endl;
}

// PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) {
// 	*this = other;
// }

// PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
// 	(void)other;
// 	return (*this);
// }

PresidentialPardonForm::~PresidentialPardonForm(void) {}

// std::ostream &operator<<(std::ostream &out, PresidentialPardonForm &form)
// {
// 		out << "form name: " << form.getName() << "; signature : " << form.SignatureCheck() << "; minimum grade to sign: ";
// 	out << form.get_gtos() << " minimum grade to execute: " << form.get_gtoex() << std::endl;
// 	return out;
// }

