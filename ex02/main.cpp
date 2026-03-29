#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try{

        Bureaucrat peter("peter", 26);
        Bureaucrat jhon("jhon", 100);
        std::cout << "Bureaucrats Birthed: " << std::endl;
        std::cout << peter;
        std::cout << jhon << std::endl;
        ShrubberyCreationForm shrub("first");
        RobotomyRequestForm robot;
        PresidentialPardonForm pardonpaper("President Krasinsky");

        std::cout << "Forms created:" << std::endl;
        std::cout << shrub << robot << pardonpaper << std::endl;

        jhon.signForm(pardonpaper);
        peter.signForm(pardonpaper);
        peter.signForm(shrub);

        peter.inc_grade();
        peter.signForm(pardonpaper);

        peter.executeForm(shrub);
        jhon.executeForm(pardonpaper);

        Bureaucrat dead("unalive", 152);
        std::cout << "this should not print" << std::endl;

    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
}