#include "Form.hpp"
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

Bureaucrat::~Bureaucrat(void) {}

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

void Bureaucrat::signForm(AForm& form)
{
	try{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.GetName() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << _name << " could not sign due to " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const & form) const
{
	try{
		form.execute(*this);
		std::cout << GetName() << " executed " << form.GetName() << std::endl;
	}
	catch(std::exception &e){
		std::cout << GetName() << " could not execute "  << form.GetName() << "  due to " << e.what() << std::endl;
	}
}
