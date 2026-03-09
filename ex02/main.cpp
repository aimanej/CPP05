#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try{

        Bureaucrat peter("peter", 3);
        std::cout << peter;
        Bureaucrat jhon("Jhon", 150);
        Bureaucrat cat(jhon);
        std::cout << cat;
        Bureaucrat kevin("kevin", 1);
        // AForm f("declaration of independance", 4, 2);
        // std::cout << f ;
        ShrubberyCreationForm form("home");
        RobotomyRequestForm ff("shrudee jhonson ");
        PresidentialPardonForm pp("tenten");

        std::cout << ff;
        std::cout << pp;
        
        // std::cout << form;
        // kevin.signForm(form);
        // kevin.executeForm(form);
        // jhon.executeForm(form);

        // kevin.executeForm(ff);
        // kevin.signForm(ff);
        // kevin.executeForm(ff);
        // kevin.executeForm(ff);
        // peter.signForm(pp);
        // kevin.executeForm(pp);

        // form.execute(jhon);
        // form.execute(kevin);
        // form.execute(peter);

        // kevin.signForm(f);
        // jhon.signForm(f);
        // peter.signForm(f);

    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
}