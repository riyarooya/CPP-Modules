/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:07:21 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/27 08:04:22 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include "Contact.class.hpp"

#define MAGENTA "\033[35m" 

class PhoneBook
{
private:
	Contact	_contacts[8];
	int static	num;
	
public:
	PhoneBook();
	~PhoneBook();

	void start();
	void add();
	void search();
	void display();
	void print(Contact info);
	std::string fixlen(std::string str);
};

#endif