#include "RobotomyRequestForm.hpp"
#include "Form.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	_target = target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
		AForm::execute(executor);
		static int t = 1;
		if(t % 2 != 0)
		{
			for(int i = 0 ; i < 4 ; i++)
				std::cout << ".....drilling noise....." << std::endl;
			std::cout << _target << "has been robotomized successfully" << std::endl;
		}
		else
			std::cout << _target << "/././././././Robotomy failed\\.\\.\\.\\.\\.\\" << std::endl;
		t++;

}

// RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) {
// 	*this = other;
// }

// RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
// 	(void)other;
// 	return (*this);
// }
// std::ostream &operator<<(std::ostream &out, RobotomyRequestForm &form)
// {
// 	out << "form name: " << form.GetName() << "; signature : " << form.SignatureCheck() << "; minimum grade to sign: ";
// 	out << form.get_gtos() << " minimum grade to execute: " << form.get_gtoex() << std::endl;
// 	return out;
// }

RobotomyRequestForm::~RobotomyRequestForm(void) {}
