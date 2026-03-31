#include "Intern.hpp"

Intern::Intern(void) {
	std::cout << "intern spawned to serve his overlords" << std::endl;
}

Intern::Intern(const Intern& other) {
	(void)other;
}

Intern& Intern::operator=(const Intern& other) {
	(void)other;
	return (*this);
}

Intern::~Intern(void) {}

AForm *Intern::makeForm(std::string name, std::string target)
{
	std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm *(Intern::*formmaker[3])(std::string targ) = {&Intern::shruberry, &Intern::robot, &Intern::pardon};

	AForm *ptr = NULL;
	for(int t = 0; t < 3; t++)
	{
		if(name == forms[t])
		{
			ptr = (this->*formmaker[t])(target);
			return ptr;
		}
	}
	throw FormNotFoundException();
	

}

AForm *Intern::shruberry(std::string target)
{
	AForm *form = new ShrubberyCreationForm( target);
	return form;
}
AForm *Intern::robot(std::string target)
{
	AForm *form = new RobotomyRequestForm(target);
	return form;
}
AForm *Intern::pardon(std::string target)
{
	AForm *form = new PresidentialPardonForm(target);

	return form;
}



const char*Intern::FormNotFoundException::what()const throw()
{
	return "form not found";
}


