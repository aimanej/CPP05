#include "Bureaucrat.hpp"

int main()
{
    try{

        Bureaucrat peter("peter", 3);
        std::cout << peter;
        Bureaucrat jhon("Jhon", 150);
        Bureaucrat cat(jhon);
        std::cout << cat;
        Bureaucrat kevin("kevin", 1);
        std::cout << kevin;
        kevin.inc_grade();

    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
}