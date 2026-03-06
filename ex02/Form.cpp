#include "Form.hpp"

AForm::AForm(void) : _name("unknown"), _g_to_sgn(1), _g_to_exe(1)
{
}

AForm::AForm(std::string name, int sgn, int exe) : _name(name), _g_to_sgn(sgn), _g_to_exe(exe)
{
	_signed = false;
	if(_g_to_sgn < 1 || _g_to_exe < 1)
		throw GradeTooHighException();
	else if(_g_to_sgn > 150 || _g_to_exe > 150)
		throw GradeTooLowException();
}

bool AForm::SignatureCheck() const
{
	return _signed;
}

void AForm::sign()
{
	_signed = true;
}

AForm::AForm(const AForm& other) : _name(other._name), _g_to_sgn(other._g_to_sgn), _g_to_exe(other._g_to_exe)
{
	_signed = other._signed;
}

int AForm::get_gtos()
{
	return _g_to_sgn;
}

std::string AForm::GetName() const
{
	return _name;
}

int AForm::get_gtoex()
{
	return _g_to_exe;
}

AForm& AForm::operator=(const AForm& other) {
	(void)other;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, AForm form)
{
	out << "form name: " << form.GetName() << "; signature : " << form.SignatureCheck() << "; minimum grade to sign: ";
	out << form.get_gtos() << " minimum grade to execute: " << form.get_gtoex() << std::endl;
	return out;
}

void AForm::beSigned(Bureaucrat& crat)
{
	if(crat.GetGrade() > _g_to_sgn)
		throw GradeTooLowException();
	sign();
	
}

AForm::~AForm(void) {}
