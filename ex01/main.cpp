// #include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try{

        Bureaucrat peter("peter", 1);
        Bureaucrat jhon("jhon", 23);
        Form dec("declaration of independence", 4, 20);
        std::cout << peter;
        std::cout << jhon;
        jhon.signForm(dec);
        peter.signForm(dec);
        std::cout << dec;

    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
}