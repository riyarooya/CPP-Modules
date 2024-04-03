#include "Bureaucrat.hpp"

int main()
{
	try 
	{
		std::cout << "overload test" << std::endl;
	Bureaucrat hi("hi", 1);
	Bureaucrat bye("bye", 150);
	std::cout << hi << std::endl << bye << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;

	}
    // try
	// {
	// 	Bureaucrat b = Bureaucrat("appel", 150);
	// 	std::cout << b;
	// 	std::cout << "Trying to decrease grade" << std::endl;
	// 	std::cout << b.getName() << "'s ";
	// 	b.incrementGrade();
	// }
	// catch (const std::exception &e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	try
	{
		Bureaucrat d = Bureaucrat("beeeee", 1);
		std::cout << d;
		std::cout << "Trying to increase grade" << std::endl;
		std::cout << d.getName() << "'s ";
		d.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}