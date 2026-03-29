#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45), _target("Unknown") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other)
{
	*this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
	{
		_target = other._target;
		if (other.SignatureCheck())
			this->sign();
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	static int t = 1;
	if (t % 2 == 0)
	{
		for (int i = 0; i < 4; i++)
			std::cout << ".....drilling noise....." << std::endl;
		std::cout << _target << " has been robotomized successfully" << std::endl;
	}
	else
		std::cout << _target << "/././././././Robotomy failed\\.\\.\\.\\.\\.\\" << std::endl;
	t++;
}

