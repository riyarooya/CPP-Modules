#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(150)
{
    if (grade > 150)
        throw   GradeTooLowException();
    else if (grade < 0)
        throw   GradeTooHighException();
}

Bureaucrat::Bureaucrat(const std::string name, int grade) :name(name), grade(grade)
{
    if (grade > 150)
        throw   GradeTooLowException();
    else if (grade < 0)
        throw   GradeTooHighException();
}
Bureaucrat::Bureaucrat(const Bureaucrat &b): name(b.name), grade(b.grade)
{
    
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b)
{
    if (this != &b)
        grade = b.getGrade();
    return(*this);
}

Bureaucrat::~Bureaucrat()
{
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return("Grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return("Grade is too low");
}

void Bureaucrat::incrementGrade()
{
    if (grade <= 1)
       throw GradeTooHighException();
   grade--;
}

void Bureaucrat::decrementGrade()
{

    if (grade >= 150)
       throw GradeTooLowException();
    grade++;
}

const std::string Bureaucrat::getName(void) const
{
    return (name);
}

int Bureaucrat::getGrade(void)const
{
    return (grade);
}

std::ostream &operator<<(std::ostream& oss, const Bureaucrat &b)
{
    oss << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
	return (oss);
}