#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    try{
        Bureaucrat jhon("jhon", 3);
        Intern djan;
        AForm *form2;

        form2= djan.makeForm("shrubbery creation", "LA");
        jhon.signForm(*form2);
        jhon.executeForm(*form2);
        delete form2;
        
        AForm* form;
        form = djan.makeForm("grass touching form", "13 students");
        jhon.executeForm(*form);

    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
}