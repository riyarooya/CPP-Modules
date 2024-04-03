/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 18:22:30 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/02 08:49:07 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): name("default"), sign(false), signgrade(150), execgrade(150)
{
}

AForm::AForm(const std::string _name, const int sign_grade, const int exec_grade): name(_name), sign(false), signgrade(sign_grade), execgrade(exec_grade)
{
}
AForm::AForm(const AForm &f): name(f.name), signgrade(f.signgrade), execgrade(f.execgrade)
{
	
}
AForm &AForm::operator=(const AForm &f)
{
	if (this != &f){
	}
	return (*this);
}

AForm::~AForm()
{
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return("Grade is too High");
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return("Grade is too Low");
}

void AForm::beSigned(Bureaucrat &signer)
{
	if (sign)
	{
		std::cout << "Signatures can only be done once" << std::endl;
		return ;
	}
	if (signer.getGrade() <= signgrade)
		sign = true;
	else
		throw GradeTooLowException();
		
}

std::string AForm::getName(void) const
{
    return (name);
}

int AForm::getSignGrade(void)const
{
    return (signgrade);
}

int AForm::getExecGrade(void)const
{
	return (execgrade);
}

bool AForm::getSigned(void)const
{
	return (sign);
}
void AForm::setSign(bool sign) {
	this->sign = sign;
}

std::ostream &operator<<(std::ostream &os, const AForm &f)
{
	os << "Name: " << f.getName() << " isSigned: " << f.getSigned() << " SignGrade: " << f.getSignGrade() << " ExecuteGrade: " << f.getExecGrade() << std::endl;
	return (os);
}