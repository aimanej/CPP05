#include "Bureaucrat.hpp"
#include "Form.hpp"


Bureaucrat::Bureaucrat(void) : _name("djando"), _grade(75){}


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

Bureaucrat::~Bureaucrat(void) {}

//getters:

std::string Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}


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
	stream << b.getName() << ", Bureaucrat grade " << b.getGrade() << std::endl;
	return stream;
}

void Bureaucrat::signForm(Form& form)
{
	try{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << _name << " could not sign due to " << e.what() << std::endl;
	}
}