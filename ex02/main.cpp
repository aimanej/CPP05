#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try{

        Bureaucrat peter("peter", 3);
        std::cout << peter;
        Bureaucrat jhon("Jhon", 150);
        Bureaucrat cat(jhon);
        std::cout << cat;
        Bureaucrat kevin("kevin", 1);
        AForm f("declaration of independance", 4, 2);
        std::cout << f ;

        kevin.signForm(f);
        jhon.signForm(f);
        peter.signForm(f);

    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
}