#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25 , 5), _target("Unknown") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25 , 5), _target(target){
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) :AForm(other){
	*this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
	if(this != &other)
	{
		_target = other._target;
		if(other.SignatureCheck())
			this->sign();
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}






// std::ostream &operator<<(std::ostream &out, PresidentialPardonForm &form)
// {
// 		out << "form name: " << form.getName() << "; signature : " << form.SignatureCheck() << "; minimum grade to sign: ";
// 	out << form.get_gtos() << " minimum grade to execute: " << form.get_gtoex() << std::endl;
// 	return out;
// }

