#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm() {
	
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137) {
	_target = target;
	
}

void ShrubberyCreationForm::exe(Bureaucrat const & executor)
{
	try{
		execute(executor);
		std::ofstream file(_target + "_ShrubberyCreationForm");
		file << "treee";
	}
	catch(std::exception &e){
		std::cout << "could not execute due to " << e.what();
	}
	
}

// ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) {
// 	*this = other;
// }

// ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
// 	(void)other;
// 	return (*this);
// }

std::ostream &operator<<(std::ostream &out, ShrubberyCreationForm &form)
{
	out << "form name: " << form.GetName() << "; signature : " << form.SignatureCheck() << "; minimum grade to sign: ";
	out << form.get_gtos() << " minimum grade to execute: " << form.get_gtoex() << std::endl;
	return out;
}

// void ShrubberyCreationForm::sign()
// {
// 	_signed = true;
// }

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}
