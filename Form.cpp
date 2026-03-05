#include "Form.hpp"

Form::Form(void) : _name("unknown"), _g_to_sgn(1), _g_to_exe(1)
{
}

Form::Form(std::string name, int sgn, int exe) : _name(name), _g_to_sgn(sgn), _g_to_exe(exe)
{
	_signed = false;
	if(_g_to_sgn < 1 || _g_to_exe < 1)
		throw GradeTooHighException();
	else if(_g_to_sgn > 150 || _g_to_exe > 150)
		throw GradeTooLowException();
}

bool Form::SignatureCheck() const
{
	return _signed;
}

void Form::sign()
{
	_signed = true;
}

Form::Form(const Form& other) : _name(other._name), _g_to_sgn(other._g_to_sgn), _g_to_exe(other._g_to_exe)
{
	_signed = other._signed;
}

int Form::get_gtos()
{
	return _g_to_sgn;
}

std::string Form::GetName() const
{
	return _name;
}

int Form::get_gtoex()
{
	return _g_to_exe;
}

Form& Form::operator=(const Form& other) {
	(void)other;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Form form)
{
	out << "form name: " << form.GetName() << "; signature : " << form.SignatureCheck() << "; minimum grade to sign: ";
	out << form.get_gtos() << "minimum grade to execute: " << form.get_gtoex() << std::endl;
	return out;
}

void Form::beSigned(Bureaucrat crat)
{
	if(crat.GetGrade() > _g_to_sgn)
		throw GradeTooLowException();
	sign();
	
}

Form::~Form(void) {}
