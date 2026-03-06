#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

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
        
        std::cout << form;
        form.beSigned(kevin);
        form.exe(jhon);
        form.exe(kevin);

        // kevin.signForm(f);
        // jhon.signForm(f);
        // peter.signForm(f);

    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
}