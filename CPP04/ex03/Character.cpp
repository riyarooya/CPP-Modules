/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 09:51:04 by juhaamid          #+#    #+#             */
/*   Updated: 2024/01/15 09:28:29 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void):name("default")
{
	for (size_t i = 0; i < 4; i++)
	{
		things[i] = NULL;
		equipped[i] = false;
	}
}

Character::Character(const std::string &name)
	: name(name)
{
	for (size_t i = 0; i < 4; i++)
	{
		things[i] = NULL;
		equipped[i] = false;
	}
}

Character::Character(const Character &old)
	:
	  name(old.name)
{
	for (size_t i = 0; i < 4; i++)
	{
		delete things[i];
		things[i] = old.things[i];
		equipped[i] = old.equipped[i];
	}
}

Character &Character::operator=(const Character &rhs)
{
	if (&rhs == this)
	{
		return (*this);
	}
	name = rhs.name;
	for (size_t i = 0; i < 4; i++)
	{
		delete things[i];
		things[i] = rhs.things[i];
		equipped[i] = rhs.equipped[i];
	}
	return (*this);
}

Character::~Character(void)
{
	for (size_t i = 0; i < 4; i++)
	{
		delete things[i];
	}
}

const std::string &Character::getName() const
{
	return (name);
}

void Character::equip(AMateria *m)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (equipped[i] == false)
		{
			delete things[i];
			things[i] = m;
			equipped[i] = true;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		equipped[idx] = false;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && equipped[idx] == true)
	{
		things[idx]->use(target);
	}
}