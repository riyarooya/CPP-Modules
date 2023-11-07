/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:07:21 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/07 12:59:35 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <string>
#include <stdlib.h>
#include <iostream>
#include "contact.class.hpp"

#define MAGENTA "\033[35m" 

class Phonebook
{
private:
	Contact	_contacts[8];
	
public:
	Phonebook();
	~Phonebook();

	void start();
	void add();
};

#endif