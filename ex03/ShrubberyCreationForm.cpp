#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137)
{
	_target = "unknown";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other)
{
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
	{
		_target = other._target;
		if (other.SignatureCheck())
			this->sign();
	}
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	std::string name = _target + "_shrubbery";

	std::ofstream file(name.c_str());
	if (file)
	{
		file << "                &&& &&  & &&" << std::endl;
		file << "            && &\\/&\\|& ()|/ @, &&" << std::endl;
		file << "            &\\/(/&/&||/& /_/)_&/_&" << std::endl;
		file << "         &() &\\/&|()|/&\\/ '%\" & ()" << std::endl;
		file << "        &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl;
		file << "      &&   && & &| &| /& & % ()& /&&" << std::endl;
		file << "       ()&_---()&\\&\\|&&-&&--%---()~" << std::endl;
		file << "           &&     \\||| " << std::endl;
		file << "                   |||" << std::endl;
		file << "                   |||" << std::endl;
		file << "                   |||" << std::endl;
		file << "             , -=-~  .-^- _" << std::endl;
		file << std::endl;
	}
}
