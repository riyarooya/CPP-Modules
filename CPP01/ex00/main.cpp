/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:19:21 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/18 16:37:33 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *num1 = newZombie("Ace");
	Zombie *num2 = newZombie("Zoro");
	randomChump("Chopper");
	randomChump("Apple");
	num1->announce();
	num2->announce();
	delete(num1);
	delete(num2);
}