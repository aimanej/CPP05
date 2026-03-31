#include "AForm.hpp"
#include <iomanip>


AForm::AForm(void) : _name("unknown"), _g_to_sgn(75), _g_to_exe(75)
{
}

AForm::~AForm(void) {}

AForm::AForm(std::string name, int sgn, int exe) : _name(name), _g_to_sgn(sgn), _g_to_exe(exe)
{
	_signed = false;
	if(_g_to_sgn < 1 || _g_to_exe < 1)
		throw GradeTooHighException();
	else if(_g_to_sgn > 150 || _g_to_exe > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm& other) : _name(other._name), _g_to_sgn(other._g_to_sgn), _g_to_exe(other._g_to_exe)
{
	_signed = other._signed;
}

AForm& AForm::operator=(const AForm& other) {
	if(this != &other)
	{
		_signed = other._signed;
	}
	return (*this);
}

bool AForm::SignatureCheck() const
{
	return _signed;
}

void AForm::sign()
{
	_signed = true;
}

int AForm::get_gtos() const
{
	return _g_to_sgn;
}

std::string AForm::getName() const
{
	return _name;
}

int AForm::get_gtoex() const
{
	return _g_to_exe;
}



void AForm::execute(Bureaucrat const & executor) const
{
	if(executor.getGrade() > _g_to_exe)
	{
		throw GradeTooLowException();
	}
	else if(!_signed)
	{
		throw FormNotSignedException();
	}
	
}
std::ostream &operator<<(std::ostream &out,const AForm& form)
{
	out << "form name: " << form.getName() << "; signature : " << form.SignatureCheck() << "; minimum grade to sign: ";
	out << form.get_gtos() << " minimum grade to execute: " << form.get_gtoex() << std::endl;
	return out;
}

void AForm::beSigned(Bureaucrat& crat)
{
	if(crat.getGrade() > _g_to_sgn)
		throw GradeTooLowException();
	_signed = true;	
}


