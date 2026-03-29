// #include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form(void) : _name("CLASSIFIED"), _g_to_sgn(1), _g_to_exe(1)
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
Form::Form(const Form& other) : _name(other._name), _g_to_sgn(other._g_to_sgn), _g_to_exe(other._g_to_exe)
{
	_signed = other._signed;
}

Form& Form::operator=(const Form& other) {
	if(this != &other)
	{
		_signed = other._signed;
	}
	return (*this);
}


bool Form::SignatureCheck() const
{
	return _signed;
}

Form::~Form(void) {}

int Form::get_gtos() const
{
	return _g_to_sgn;
}


int Form::get_gtoex() const
{
	return _g_to_exe;
}

std::string Form::getName() const
{
	return _name;
}


std::ostream &operator<<(std::ostream &out, Form &form)
{
	out << "form name: " << form.getName() << "; signature : " << form.SignatureCheck() << "; minimum grade to sign: ";
	out << form.get_gtos() << " minimum grade to execute: " << form.get_gtoex() << std::endl;
	return out;
}

void Form::beSigned(Bureaucrat &crat)
{
	if(crat.getGrade() > _g_to_sgn)
		throw GradeTooLowException();
	_signed = true;
	
}


