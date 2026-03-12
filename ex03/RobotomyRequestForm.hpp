#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "form.hpp"

class RobotomyRequestForm : public AForm {
	private:
		std::string _target;
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		void execute(Bureaucrat const  &executor) const;
		// RobotomyRequestForm(const RobotomyRequestForm& other);
		// RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
		~RobotomyRequestForm(void);
};

// std::ostream &operator<<(std::ostream &out, RobotomyRequestForm &form);


#endif
