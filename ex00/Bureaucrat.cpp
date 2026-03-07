#include "Bureaucrat.hpp"


std::string Bureaucrat::GetName() const
{
	return _name;
}

int Bureaucrat::GetGrade() const
{
	return _grade;
}
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if(_grade > 150)
		throw GradeTooLowException();
	else if(_grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name),  _grade(other._grade)
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	if(this != &other)
	{
		_grade = other._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat(void) { std::cout << "destructor for Bureaucrat " << _name << "called \n";}

void Bureaucrat::inc_grade()
{
	_grade--;
	if(_grade < 1)
		throw GradeTooHighException();
}

void Bureaucrat::dec_grade()
{
	_grade++;
	if(_grade > 150)
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &stream, Bureaucrat &b)
{
	stream << b.GetName() << ", Bureaucrat grade " << b.GetGrade() << std::endl;
	return stream;
}