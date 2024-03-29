/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 09:59:02 by juhaamid          #+#    #+#             */
/*   Updated: 2024/01/22 08:31:42 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    ICharacter *me = new Character("me");
    ICharacter *mark = new Character("mark");
    AMateria *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
	mark->equip(new Ice());
	mark->equip(new Cure());
	mark->equip(new Cure());
	mark->equip(new Cure());
	Ice *ice = new Ice();
	mark->equip(ice);
	delete ice;
	mark->use(3, *mark);
	mark->unequip(3);
	mark->use(3, *mark);
	mark->equip(new Ice());
	mark->use(3, *mark);
    ICharacter *bob = new Character("pop");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete mark;
    delete src;
    return 0;
}
