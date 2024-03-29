/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:31:09 by juhaamid          #+#    #+#             */
/*   Updated: 2023/12/02 12:21:28 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
			FragTrap();
			FragTrap(std::string name);
			FragTrap(const FragTrap &a);
			FragTrap &operator=(const FragTrap &other);
			virtual ~FragTrap();
			void highFivesGuys(void);
	
};

#endif