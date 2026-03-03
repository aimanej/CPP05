#include "Bureaucrat.hpp"


std::string Bureaucrat::GetName() const
{
	return _name;
}

int Bureaucrat::GetGrade() const
{
	return _grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) {
	*this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	(void)other;
	return (*this);
}

Bureaucrat::~Bureaucrat(void) {}
